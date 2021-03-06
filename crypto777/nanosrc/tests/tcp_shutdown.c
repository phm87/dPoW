/*
    Copyright (c) 2012 Martin Sustrik  All rights reserved.

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom
    the Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#include "../nn.h"
#include "../pair.h"
#include "../pubsub.h"
#include "../pipeline.h"
#include "../tcp.h"

#include "testutil.h"
#include "../utils/attr.h"
#include "../utils/thread.h"
#include "../utils/atomic.h"

/*  Stress test the TCP transport. */

#define THREAD_COUNT 100
#define TEST2_THREAD_COUNT 10
#define MESSAGES_PER_THREAD 10
#define TEST_LOOPS 10
#define SOCKET_ADDRESS "tcp://127.0.0.1:5467"

static struct nn_atomic active;

static void routine (NN_UNUSED void *arg)
{
    int s;

    s = nn_socket (AF_SP, NN_SUB);
    if (s < 0 && nn_errno () == EMFILE)
        return;
    errno_assert (s >= 0);
    test_connect (s, SOCKET_ADDRESS);
    test_close (s);
}

static void routine2 (NN_UNUSED void *arg)
{
    int s;
    int i;

    s = test_socket (AF_SP, NN_PULL);

    for (i = 0; i < 10; ++i) {
        test_connect (s, SOCKET_ADDRESS);
    }

    for (i = 0; i < MESSAGES_PER_THREAD; ++i) {
        test_recv (s, "hello");
    }

    test_close (s);
    nn_atomic_dec(&active, 1);
}

int testtcp_shutdown()
{
    int sb;
    int i;
    int j;
    struct nn_thread threads [THREAD_COUNT];
    printf("test tcp shutdown\n");

    /*  Stress the shutdown algorithm. */

#if defined(SIGPIPE) && defined(SIG_IGN)
    signal (SIGPIPE, SIG_IGN);
#endif

    sb = test_socket (AF_SP, NN_PUB);
    test_bind (sb, SOCKET_ADDRESS);

    for (j = 0; j != TEST_LOOPS; ++j) {
        for (i = 0; i != THREAD_COUNT; ++i)
            nn_thread_init (&threads [i], routine, NULL);
        for (i = 0; i != THREAD_COUNT; ++i)
            nn_thread_term (&threads [i]);
    }

    test_close (sb);

    /*  Test race condition of sending message while socket shutting down  */

    sb = test_socket (AF_SP, NN_PUSH);
    test_bind (sb, SOCKET_ADDRESS);

    for (j = 0; j != TEST_LOOPS; ++j) {
        for (i = 0; i != TEST2_THREAD_COUNT; ++i)
            nn_thread_init (&threads [i], routine2, NULL);
        nn_atomic_init(&active, TEST2_THREAD_COUNT);

        while (active.n) {
            (void) nn_send (sb, "hello", 5, NN_DONTWAIT);
        }

        for (i = 0; i != TEST2_THREAD_COUNT; ++i)
            nn_thread_term (&threads [i]);
        nn_atomic_term(&active);
    }

    test_close (sb);

    return 0;
}
