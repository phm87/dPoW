# dPoW client _iguana_

This repository is based on the original SuperNET codebase - commit [f29913e92b117399cd42e2fd05ff0d69d152c8fa](https://github.com/ca333/SuperNET/commit/f29913e92b117399cd42e2fd05ff0d69d152c8fa)

Integration | Status 
-------------|------
CI build - Ubuntu (16.04, 18.04) | [![Build Status](https://github.com/komodoplatform/dpow/workflows/CI/badge.svg?maxAge=60)](https://github.com/KomodoPlatform/dPoW/actions)
Codefactor analysis | [![Grade](https://img.shields.io/codefactor/grade/github/komodoplatform/dpow)](https://www.codefactor.io/repository/github/komodoplatform/dpow)
Version | [![Version](https://img.shields.io/github/v/release/komodoplatform/dPoW)](https://github.com/KomodoPlatform/dPoW/releases)

---


## Installation 

General [Setup instructions](https://docs.komodoplatform.com/notary/setup-Komodo-Notary-Node.html#setup-komodo-notary-node)

For Hush3 S3 notary network during S4, please read instructions below.

### Build instructions for NN operations:


`cd iguana`

#### Build iguana for notary operations
`./m_notary_build`

#### Start main-net notarizations:
`./m_notary_KMD`

#### Start 3rd party notarizations:
`./m_notary_3rdparty`


###### To build and launch main-net notarizations in one step run `./m_notary`

#

**Please note: Automatic UTXO split is deactivated by default.**

### dPoW asset status

[![dPOW Status](http://116.203.64.110/svg/date_badge.svg?maxAge=60)](https://komodostats.com)
* active - last notarization less than 2.5 hours ago
* irregular - last notarization more than 2.5 and less than 24 hours ago
* inactive - last notarization more than 24 hours ago

Coin | src | Version/Tree | Status | dPoW 
--------|------|---|------|------
KMD | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/KMD_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-Mainnet
BTC | [bitcoin](https://github.com/bitcoin/bitcoin) | 0.16 | [![dPOW Status](http://116.203.64.110/svg/KMD_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-Mainnet
AXO | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/AXO_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
AYA | [aryacoin](https://github.com/sillyghost/AYAv2) | 7c8498 | [![dPOW Status](http://116.203.64.110/svg/AYA_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-3P
BET | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/BET_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
BOTS | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/BOTS_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
BTCH | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/BTCH_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
CCL | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/CCL_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
CHIPS | [chips](https://github.com/jl777/chips3/tree/dev) | dev | [![dPOW Status](http://116.203.64.110/svg/CHIPS_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-3P
COQUICASH | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/COQUICASH_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
CRYPTO | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/CRYPTO_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
DEX | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/DEX_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
EMC2 | [emc2](https://github.com/emc2foundation/einsteinium) | lastest master | [![dPOW Status](http://116.203.64.110/svg/EMC2_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-3P
ETOMIC | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/ETOMIC_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
GAME | [game](https://github.com/gamecredits-project/GameCredits) | latest master | [![dPOW Status](http://116.203.64.110/svg/GAME_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-3P
GIN | [gin](https://github.com/GIN-coin/gincoin-core) | latest master | [![dPOW Status](http://116.203.64.110/svg/GIN_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-3P
HODL | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/HODL_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
HUSH3 | [hush3](https://github.com/myhush/hush3) | [v3.3.1](https://github.com/MyHush/hush3/tree/v3.3.1) | [![dPOW Status](http://116.203.64.110/svg/HUSH3_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-3P
ILN | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/ILN_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
JUMBLR | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/JUMBLR_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
K64 | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/K64_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
KOIN | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/KOIN_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
KSB | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/KSB_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
KV | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/KV_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
MESH | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/MESH_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
MGW | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/MGW_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
MORTY | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/MORTY_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
MSHARK | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/MSHARK_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
NINJA | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/NINJA_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
OOT | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/OOT_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
OUR | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/OUR_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
PANGEA | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/PANGEA_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
PGT | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/PGT_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
PIRATE | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/PIRATE_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
REVS | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/REVS_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
RFOX | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/RFOX_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
RICK | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/RICK_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
SEC | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/SEC_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
STBL | [komodo](https://github.com/komodoplatform/komodo) | [212c4e7](https://github.com/KomodoPlatform/komodo/tree/212c4e7f44fddca6121953258966407e4e91f6a5/) | [![dPOW Status](http://116.203.64.110/svg/STBL_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
SUPERNET | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/SUPERNET_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
THC | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/THC_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
VOTE2020 | [komodo](https://github.com/komodoplatform/komodo) | [b099cf6](https://github.com/KomodoPlatform/komodo/tree/b099cf66c2964412574784196c29ffcad03bfcd8) | [![dPOW Status](http://116.203.64.110/svg/VOTE2020_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
VRSC | [verus](https://github.com/VerusCoin/VerusCoin) | [391c403 (v0.6.4-3)](https://github.com/VerusCoin/VerusCoin/tree/391c403814d25434b75cd3a82e1d79dfeb8ab0eb) | [![dPOW Status](http://116.203.64.110/svg/VRSC_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
WLC21 | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/WLC21_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
ZEXO | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/ZEXO_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet
ZILLA | [komodo](https://github.com/komodoplatform/komodo) | 0.5.2 | [![dPOW Status](http://116.203.64.110/svg/ZILLA_badge.svg?maxAge=60)](https://komodostats.com) | dPoW-mainnet

# HUSH3 Notary network using KMD code (credits to KMD Team & SuperNET Developers)
1. Perform the 3P server setup including iguana setup in ~/dPow folder

https://docs.komodoplatform.com/notary/setup-Komodo-Notary-Node.html#_3rd-party-server-setup

## same user, same server

2. Install and sync HUSH3 on 3P (if not performed during the step 1)

See link mentionned at step 1 for details.

3. Import your S3 3P Compressed private key into KMD and Hush3, import your S3 3P Compressed private key related to Game into gamecredits

4. Install iguana for Hush3 with the same user

``
git clone https://github.com/phm87/dPow -b HushNN HdPow
``

5. Configure iguana with your S3 key

5.1 Create wp_7787

The Hush3 3rd party server iguana will use the port 7787.

Create wp_7787 file inside the `~/HdPoW/iguana` directory with the same passphrase you used to generate your 3rd Party address/pubkey of S3. The file should look as follows (replace YOUR_VERY_SECURE_PASSPHRASE with your own of S3):

``
curl --url "http://127.0.0.1:7787" --data "{\"method\":\"walletpassphrase\",\"params\":[\"YOUR_VERY_SECURE_PASSPHRASE\", 9999999]}"
``

5.2 Make wp_7787 executable

``
chmod 700 wp_7779
``

5.3 configure pubkey.txt inside ~/HdPow/iguana

You will need to create a `pubkey.txt` file inside `~/HdPoW/iguana directory`. This file will be used to start the dPoW process in the dpowassets script later on. `pubkey.txt` file should contain only the pubkey of the appropriate server. The file should contain only the information in the example below. Change 02a854251adfee222bede8396fed0756985d4ea905f72611740867c7a4ad6488c1 to the appropriate pubkey for the server the file is on.

``
pubkey=02a854251adfee222bede8396fed0756985d4ea905f72611740867c7a4ad6488c1
``

Remark: the pubkey set on komodo daemon will remain the S4 pubkey so please do not change your start script nor the content of pubkey.txt. UTXO split should be performed using S4 keys and using S3 keys.

5.4 UTXO split

During 3P NN setup, you created a `acsplit` file, you should create a similar `hnsplit` file with port 7787 instead of 7776, see https://docs.komodoplatform.com/notary/split-utxo-for-notarization.html#step-1-create-a-script-named-acsplit for details.

``
#!/bin/bash
curl --url "http://127.0.0.1:7787" --data "{\"coin\":\""${1}"\",\"agent\":\"iguana\",\"method\":\"splitfunds\",\"satoshis\":\"10000\",\"sendflag\":1,\"duplicates\":"${2}"}"
``

You can use the script you want to perform the coinsplits but you'll need UTXO on both S3 and S4 addresses on the same KMD node.

6. Launch iguana

It is recommanded to launch iguana into a screen or tmux.

``
cd ~/HdPow/iguana
./m_notary_3rdparty_S3
``

7. Verify that each iguana is able to notarize

## different user, same server

## different server

## Tests:
