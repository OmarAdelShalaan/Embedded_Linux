# crosstool-NG

### ([Documentation](https://crosstool-ng.github.io/docs/)) ([Repo](https://github.com/crosstool-ng/crosstool-ng))

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

## Building the Toolchain
- ./ct-ng build


## To ADD ct-ng to $PATH
export PATH=$PATH:(PWD OF Crosstool DIR) 
