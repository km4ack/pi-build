# Support this Project

[![Patreon](https://www.dropbox.com/s/gr6k9j359b744tl/patreon-logo1.png?dl=1)](https://patreon.com/km4ack) | [![Tip Jar](https://www.dropbox.com/s/tk4w0tery1ugrqz/tip-jar-1024x900.png?dl=1)](https://paypal.me/km4ack)

# Description

Build-a-Pi will allow you to get up and running fast with a Raspberry Pi for ham radio.
Rather than downloading a pre-built image where you have no choices in the build, Build-a-
Pi gives you complete control over the build. It allows you to choose the applications you 
want to install and skip the ones you don’t need. This keeps your pi as lean and mean as
possible. A list of applications available using Build-a-Pi can be found below on this 
page. Use it as your base and add additional applications as needed down the road. 

# Needed info for pi build

During the install you will need a few pieces of information depending on what you choose to install. If installing all apps, you will need:

For Hotspot:
Current WiFi SSID & Current WiFi Password

For Pat Winlink:
Winlink Password & Grid Square

# Install
Use [Raspberry Pi Imager](https://www.raspberrypi.com/software/) to download and flash your micro SD card. Once complete, put the SD card into the pi.

Power up your Raspberry Pi, login, open the terminal, and run the following command.

     git clone https://github.com/km4ack/pi-build.git \
      $HOME/pi-build && bash $HOME/pi-build/build-a-pi

Additional help can be found in the video below.
     
# Video

[![IMAGE ALT TEXT](https://img.youtube.com/vi/GkGcu6WaWsc/0.jpg)](https://youtu.be/GkGcu6WaWsc "Build a Pi")
[![IMAGE ALT TEXT](https://img.youtube.com/vi/AjzLp6OMyVk/0.jpg)](https://youtu.be/AjzLp6OMyVk "Build a Pi")
[![IMAGE ALT TEXT](https://img.youtube.com/vi/l4M9VVqGxoc/0.jpg)](https://youtu.be/l4M9VVqGxoc "Build a Pi")


# Issue Reporting - Feature Requests
Please report issues & feature requests here: https://github.com/km4ack/pi-build/issues

# BOINC-FREE

Build-a-Pi has never, and will never, try to force any user to run BOINC (Berkeley Open Infrastructure for Network Computing). Build-a-Pi has always been about giving the end-user a choice in the software they run. It's also the reason Build-a-Pi isn't distrubuted as a pre-built image. You have the final say in what you run on your RPi. Install as little, or as much, as you choose. While it doesn't include as many apps as some of the pre-built images, Build-a-Pi should give you a great base to work with, then you can add additional applications that may be important to you on top. Want to run BOINC? Feel free because freedom is the basis of Build-a-Pi. The power is yours and yours alone.

# Available Apps to Install

#### RTC | Real Time Clock
Software for DS3231 real-time clock (Available through update script after initial install)

#### HOTSPOT:
Hotspot is used to generate a wifi hotspot that you can connect-to with other wireless devices. This is useful in the field, so you can connect-to and contol the RPi from a wireless device.

If enabled, the hotspot will only activate _IF_ the RPi is not already connected to a wireless network.  The hotspot will either activate at bootup, _OR_ a maximum of 5 minutes AFTER you have forcefully disconnected from a wireless network. You can tune that detection delay in the settings.
The hotspot default SSID is *RpiHotspot* and the default IP address of the Pi is 10.10.10.10.
(Make sure to enable either VNC or SSH server to remotely connect to your RPi at that address!)

#### Hotspot Tools:
Hotspot tools is a collection of tools designed to make managing the hotspot easier through a GUI interface. https://youtu.be/O_eihSN_ES8

#### GPS:
This will install the needed utilities to get a GPS device configured as a time source on the RPi. Helpful when you are not connected to the Internet since the RPi doesn't have a real-time clock (RTC) and therefore will _NOT_ keep accurate time when powered-off. Confirmed to work with this GPS: https://amzn.to/2R9Muup Other GPS units may work, but have not been tested.

#### FLRIG:
Rig contol graphical interface. http://www.w1hkj.com/

#### FLDIGI:
Digital Mode Software http://www.w1hkj.com/

#### FLMSG:
Forms manager for FLDIGI http://www.w1hkj.com/

#### FLAMP:
Amateur Multicast Protocol - file transfer program http://www.w1hkj.com/

#### FLWRAP
File encapsulation & compression

#### PAT:
Winlink client for Raspberry Pi https://getpat.io/

#### PATMENU:
Menu for configuring Pat. Recommended if installing Pat. https://github.com/km4ack/patmenu

#### wfview & wfserver
wfview is a program developed by amateur radio enthusiasts to control modern Icom ham radios https://wfview.org

#### ARDOPC:
HF modem for Pat. Recommended if installing Pat. https://www.cantab.net/users/john.wiseman/Documents/ARDOPC.html

#### ARDOPGUI:
GUI interface for ARDOPC. Recommended if installing Pat.

#### DIREWOLF:
Software TNC. In this setup, Direwolf is used for a 2M packet connection with Pat, and can be used for APRS connection with Xastir. Recommended if installing Pat or Xastir. https://github.com/wb2osz/direwolf/tree/master/doc

#### AX25:
AX.25 tools for Direwolf & Pat. Recommended if installing Pat. 

#### HAMLIB:
Rig contol software. https://sourceforge.net/projects/hamlib/

#### PULSE:
Pulse audio. Provides a way to configure virtual sound cards. REQUIRED for AMRRON ops.
(Get involved! https://amrron.com)

#### JS8:
JS8Call digital software. https://js8call.com

#### M0IAX:
Tools for working with JS8Call. Recommended if installing JS8Call. https://github.com/m0iax/

#### WSJTX:
FT8 & WISPR software suite. https://sourceforge.net/projects/wsjt/

#### CHIRP:
Software to program radios. https://chirp.danplanet.com

#### XASTIR:
GUI interface useful when configuring APRS nodes. https://sourceforge.net/projects/xastir/

#### D-RATS:
D-RATS is a communications tool for D-STAR amateur radio low-speed data (DV mode) https://github.com/ham-radio-software/D-Rats

#### YAAC:
Yet Another APRS Client GUI interface useful when configuring APRS nodes. https://www.ka2ddo.org/ka2ddo/YAAC.html

#### PYQSO:
Logging software. https://github.com/ctjacobs/pyqso

#### GPREDICT:
Satellite Tracking. http://gpredict.oz9aec.net/

#### CQRLOG:
Logging Software. https://www.cqrlog.com/

#### QSSTV:
Slow-scan TV (SSTV). http://users.telenet.be/on4qz/qsstv/index.html

#### Gridtracker 
https://tagloomis.com/

#### Propagation (VOACAP)
Propagation Prediction Software. https://www.qsl.net/hz1jw/voacapl/index.html

#### Emergency Email Server (EES):
My personal EES. Requires hotspot to be installed. https://youtu.be/XC9vdAnolO0
\
To access the EES, connect to the pi's hotspot, open a web browser, and navigate to email.com\
or open a web browser and navigate to the pi's ip adderss on your local network.\
Admin credentials are admin/admin by default but can be changed in the file found at\
/var/www/html/config.php \
For more configuration options - https://youtu.be/KaEeCq50Mno

#### Call Sign Lookup
Amateur radio call-sign lookup.

#### Dipole Calculator
Calculate lengths needed for dipole legs.

#### Log Viewer
Graphic viewer to view/manage log files.

#### Gparted
Disk utility.

# Support this Project

[![Patreon](https://www.dropbox.com/s/gr6k9j359b744tl/patreon-logo1.png?dl=1)](https://patreon.com/km4ack) | [![Tip Jar](https://www.dropbox.com/s/tk4w0tery1ugrqz/tip-jar-1024x900.png?dl=1)](https://paypal.me/km4ack)

