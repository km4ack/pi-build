# Description

Build-a-Pi will allow you to get up and running fast with a Raspberry Pi for ham radio.
Rather than downloading a pre-built image where you have no choices in the build, Build-a-
Pi gives you complete control over the build. It allows you to choose the applications you 
want to install and skip the ones you don’t need. This keeps your pi as lean and mean as
possible. A list of applications available using Build-a-Pi can be found below on this 
page. Use it as your base and add additional applications as needed down the road. Videos 
coming soon

# Needed info for pi build

During the install you will need a few pieces of information depending on what you choose to install. If installing all apps, you will need:

For Hotspot:
Current WiFi SSID & Current WiFi Password

For Pat Winlink:
Winlink Password & Grid Square

# Install
Download Raspberry Pi OS (previously called Rasbian) 32-bit from https://downloads.raspberrypi.org/raspios_armhf_latest

Use a USB flash application such as Balena Etcher to copy the iso file to a USB key, get it at https://www.balena.io/etcher/

Power up your Raspberry Pi, login, and in your home directory, run the following command

     git clone https://github.com/km4ack/pi-build.git \
      $HOME/pi-build && bash $HOME/pi-build/build-a-pi
     
# Video
[![IMAGE ALT TEXT](https://img.youtube.com/vi/l4M9VVqGxoc/0.jpg)](https://youtu.be/l4M9VVqGxoc "Build a Pi")


# Issue Reporting - Feature Requests
Please report issues & feature requests here https://github.com/km4ack/pi-build/issues

# BOINC FREE

Build a Pi has never and will not ever try to force any user to run BOINC (Berkeley Open Infrastructure for Network Computing). Build a pi has been always been about giving the end user a choice in the software they run. It is the reason Build a Pi isn't distrubuted as a pre built image. You have the final say in what you run on your pi. Install as little or as much as you choose. While it doesn't include as many apps as some of the pre-built images, it should give you a great base to work with and then you can add additional applications that may be important to you on top of Build a Pi. Want to run BOINC? Feel free because freedom is the basis of Build a Pi. The power is yours and yours alone.

# Available Apps to Install

#### RTC | Real Time Clock
Software for DS3231 real time clock (Available through update script after initial install)

#### HOTSPOT:
Hotspot is used to generate a wifi hotspot that you can connect to with other wireless devices. This is useful when in the field so you can connect to and contol the pi from a wireless device.

If enabled, the hotspot will only activate IF the Pi is not connected to a wireless network.  The hotspot will either activate at bootup, OR a maximum of 5 minutes AFTER you have forcefully disconnected from a wireless network. You can tune that detection delay in the settings.
The hotspot default SSID is *RpiHotspot* and the default IP address of the Pi is 10.10.10.10.
Make sure to enable either VNC or SSH server in order to remotely connect to your Pi at that address.

#### Hotspot Tools:
Hotspot tools is a collection of tools designed to make managing the hotspot easier through a GUI interface. https://youtu.be/O_eihSN_ES8

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

#### FLWRAP
file encapsulation / compression

#### PAT:
Winlink client for Raspberry Pi https://getpat.io/

#### PATMENU:
Menu for configuring Pat. Recommended if installing Pat. https://github.com/km4ack/patmenu

#### ARDOPC:
HF modem for Pat. Recommended if installing Pat https://www.cantab.net/users/john.wiseman/Documents/ARDOPC.html

#### ARDOPGUI:
GUI interface for ARDOPC. Recommended if installing Pat 

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

#### Call Sign Lookup
Look amateur radio call signs

#### Dipole Calculator
Calculate lengths needed for dipole legs

#### Log Viewer
Graphic viewer to view/manage log files

#### Gparted
Disk utility
