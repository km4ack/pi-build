# Needed info for pi build

During the install you will need a few pieces of information depending on what you choose to install. If installing all apps, you will need:

For Hotspot:
Current WiFi SSID & Current WiFi Password

For Pat Winlink:
Winlink Password & Grid Square

# Install
This script is intended to run on a brand new installation of Buster. It should not be run on a pi that you have already started installing applications on. Install additional apps that you require after running this script.\
\
Flash a fresh copy of  Buster to a SD card and run the following command

     git clone https://github.com/km4ack/pi-build.git $HOME/pi-build && bash $HOME/pi-build/build-a-pi
     
# Issue Reporting - Feature Requests
Please report issues & feature requests here https://github.com/km4ack/pi-build/issues

# Video
[![Build-a-Pi](http://img.youtube.com/vi/gBokG9FI-NM/0.jpg)](https://youtu.be/gBokG9FI-NM "Build-a-Pi")
[![Build-a-Pi V2](https://img.youtube.com/vi/gBokG9FI-NM/0.jpg)](https://youtu.be/-jAZh2dYTuA "Build-a-Pi")

# Available Apps to Install

#### RTC | Real Time Clock
Software for DS3231 real time clock

#### HOTSPOT:
Hotspot is used to generate a wifi hotspot that you can connect to with other wireless devices. This is useful when in the field so you can connect to and contol the pi from a wireless device.

#### GPS:
This will install the needed utilities to get a GPS device configured as a time source on the pi. Helpful when you are not connected to the internet since the pi doesn't have a real time clock and therefore will NOT keep accurate time when powered off. Confirmed to work with this GPS https://amzn.to/2R9Muup Other GPS units may work but have not been tested.

#### FLRIG:
Rig contol graphical interface. http://www.w1hkj.com/

#### FLDIGI:
Digital Mode Software http://www.w1hkj.com/

#### FLMSG:
Forms manager for FLDIGI http://www.w1hkj.com/

#### FLAMP:
Amateur Multicast Protocol - file transfer program http://www.w1hkj.com/

#### PAT:
Winlink client for Raspberry Pi https://getpat.io/

#### ARDOPC:
HF modem for Pat. Recommended if installing Pat https://www.cantab.net/users/john.wiseman/Documents/ARDOPC.html

#### ARDOPGUI:
GUI interface for ARDOPC. Recommended if installing Pat 

#### PATMENU:
Menu for configuring Pat. Recommended if installing Pat. https://github.com/km4ack/patmenu

#### DIREWOLF:
Software TNC. In this setup, direwolf is used for 2M packet connection with Pat and can be used for APRS connection with Xastir. Recommneded if installing Pat or Xastir https://github.com/wb2osz/direwolf/tree/master/doc

#### AX25:
AX25 tools for Direwolf & Pat. Recommended if installing Pat. 

#### HAMLIB:
Rig contol software. https://sourceforge.net/projects/hamlib/

#### PULSE:
Pulse audio. Provides a way to configure virtual sound cards. REQUIRED for AMRRON ops. 

#### JS8:
JS8Call digital software https://js8call.com

#### M0IAX:
Tools for working with JS8Call. Recommended if installing JS8Call https://github.com/m0iax/

#### WSJTX:
FT8 & WISPR software suite. https://sourceforge.net/projects/wsjt/

#### CHIRP:
Software to program radios. https://chirp.danplanet.com

#### XASTIR:
GUI interface useful when configuring APRS nodes. https://sourceforge.net/projects/xastir/

#### YAAC:
Yet Another APRS Client GUI interface useful when configuring APRS nodes. https://www.ka2ddo.org/ka2ddo/YAAC.html

#### PYQSO:
Logging software https://github.com/ctjacobs/pyqso

#### GPREDICT:
Satellite Tracking http://gpredict.oz9aec.net/

#### CQRLOG:
Loggin Software https://www.cqrlog.com/

#### QSSTV:
Slow scan tv http://users.telenet.be/on4qz/qsstv/index.html

#### Gridtracker 
https://tagloomis.com/

#### Propagation (VOACAP)
Propagation Prediction Software https://www.qsl.net/hz1jw/voacapl/index.html

#### Emergency Email Server (EES):
My personal EES. Requires hotspot to be installed. https://youtu.be/XC9vdAnolO0
\
To access the EES, connect to the pi's hotspot, open a web browser, and navigate to email.com\
or open a web browser and navigate to the pi's ip adderss on your local network.\
Admin credentials are admin/admin by default but can be changed in the file found at\
/var/www/html/config.php \
For more configuration options - https://youtu.be/KaEeCq50Mno


