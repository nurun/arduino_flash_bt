arduino_flash_bt
================

This is a test project for communicating wirelessly between an Arduino and Flash using Bluetooth.

I've tested this on my Mac using Flash CS5.5.

I use tinkerproxy-2_0 (http://code.google.com/p/tinkerit/wiki/TinkerProxy) to bridge between the serial port and Flash. I have not included the needed serproxy application, only my configuration file for it. You need to download the tinkerproxy code from their site. Once you have it, place the SerialPort.as file in the same folder as my serial_test.fla (bt_flash) and serproxy in the same folder as my serproxy.cfg (tinkerproxy-2_0)

The radio I used is the Sparkfun Bluetooth Mate Gold (https://www.sparkfun.com/products/9358). I found that with my Arduino Leonardo, even with the serial connection to my Mac removed, I could not get the standard TX/RX pins to work. I did not have to connect the radio's CTS and RTS pins.

For information on pairing the Mac and the Bluetooth radio, see this page (http://www.rioleo.org/setting-up-the-arduino-pro-mini-and-bluetooth-mate-on-mac.php). The most important thing to know is to use the following passcode: "1234". Also, pairing the device does not make the connection. Running serproxy also does not form the connection. The green connection LED on the BT radio will not be lit until the Flash app makes the connection to serproxy.