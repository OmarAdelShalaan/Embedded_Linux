# crosstool-NG

### ([Documentation](https://crosstool-ng.github.io/docs/)) ([Repo](https://github.com/crosstool-ng/crosstool-ng))

## Install Dependencies:
  sudo apt install -y gcc g++ gperf bison flex texinfo help2man make libncurses5-dev python3-dev autoconf automake libtool-bin gawk wget bzip2 xz-utils unzip patch libstdc++6 rsync


## Installing crosstool-NG
  - git clone https://github.com/crosstool-ng/crosstool-ng
  - git checkout 25f6dae8
  - ./bootstrap
  - ./configure --enable-local
  - make
  - ./ct-ng help 

## Configuring crosstool-NG
- ./ct-ng menuconfig
- ./ct-ng list-samples
- ./ct-ng show-arm-unknown-linux-gnueabi

## Choose toolchain for required architecture:
- ./ct-ng [microcontroller]

## Building the Toolchain
- ./ct-ng build

## Delete the Toolchain menuconfig
- ./ct-ng distclean

## To ADD ct-ng to $PATH
- export PATH=$PATH:(PWD OF Crosstool DIR)
