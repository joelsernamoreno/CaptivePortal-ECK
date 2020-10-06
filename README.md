# CaptivePortal-ECK
Simple Captive Portal for Evil Crow Keylogger: Access point (Free WiFi) with a registration form. Information is stored on the MicroSD card (Email and password).

![Init](https://github.com/joelsernamoreno/CaptivePortal-ECK)/blob/master/images/init.jpg)

**Development and implementation:** Joel Serna (@JoelSernaMoreno)
**Version:** 1.0 (c) 2020

The developers and collaborators of this project do not earn money with this. 
You can invite me for a coffee to further develop Low-Cost hacking devices. If you don't invite me for a coffee, nothing happens, I will continue developing devices.

[![ko-fi](https://www.ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/E1E614OA5)

**Evil Crow Keylogger For Sale at:**

* [Aliexpress Shop](https://www.aliexpress.com/item/4001219974113.html)
* [Tindie Shop](https://www.tindie.com/products/aprbrother/evilcrow-keylogger/)

**Documentation:** 

* [Github](https://github.com/joelsernamoreno/EvilCrow-Keylogger)

# Installation

## Software requirements

* 0.- Add your user to the dialout group: sudo usermod -a -G dialout USER

* 1.- Install esptool: sudo apt install esptool

* 2.- Install pyserial: sudo pip install pyserial

## Automatic installation

1. Install Platformio Core: https://docs.platformio.org/en/latest/core/index.html
1. Download source [CaptivePortal-ECK](https://github.com/joelsernamoreno/CaptivePortal-ECK): `git clone https://github.com/joelsernamoreno/CaptivePortal-ECK).git`
1. Copy the keylogger-pio directory to the same level as the CaptivePortal-ECK directory: `cp -r CaptivePortal-ECK/keylogger-pio/ .`
1. Add jumper GPIO0 to GND for ESP32-PICO
![Jumper](https://github.com/joelsernamoreno/CaptivePortal-ECK)/blob/master/images/jumper.jpg)
1. Connect Evil Crow Keylogger via USB port
1. Go to the new keylogger-pio directory: `cd keylogger-pio`
1. Run `flash.bat` or `./flash.sh` to program 32u4 and esp32-pico

**Note:** Please re-plug Evil Crow Keylogger if you run the steps again. Because the script can't reset ESP32-PICO to program mode.

# First steps with CaptivePortal for Evil Crow Keylogger

* 1.- Visualize the wifi networks around you and connect to the Keylogger (default SSID: FREE WIFI).

* 2.- Open a browser and access any website, for example: http://poc.com/

* 3.- Enter a false email and password in the form, now try to login

* 4.- Check the email and password on the MicroSD card (file: LOG.txt)

![SD](https://github.com/joelsernamoreno/CaptivePortal-ECK)/blob/master/images/sd.png)
