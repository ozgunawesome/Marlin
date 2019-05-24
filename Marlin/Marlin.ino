/*
  G21    ; Units in mm (mm)
  M149 C ; Units in Celsius

  M200 D1.75
  M200 D0
  M92 X80.00 Y80.00 Z400.00 E93.00
  M203 X500.00 Y500.00 Z5.00 E25.00
  M201 X500.00 Y500.00 Z100.00 E5000.00
  M204 P500.00 R500.00 T500.00
  M205 B20000.00 S0.00 T0.00 X10.00 Y10.00 Z0.30 E5.00
  M206 X0.00 Y0.00 Z0.00
  M420 S1
  M145 S0 H200 B60 F255
  M145 S1 H240 B0 F255
  M301 P21.73 I1.54 D76.55
  M851 Z0.00
  
  ================================================================================

  Marlin Firmware

  (c) 2011-2018 MarlinFirmware
  Portions of Marlin are (c) by their respective authors.
  All code complies with GPLv2 and/or GPLv3

================================================================================

Greetings! Thank you for choosing Marlin 2 as your 3D printer firmware.

To configure Marlin you must edit Configuration.h and Configuration_adv.h
located in the root 'Marlin' folder. Check the config/examples folder to see if
there's a more suitable starting-point for your specific hardware.

Before diving in, we recommend the following essential links:

Marlin Firmware Official Website

  - http://marlinfw.org/
    The official Marlin Firmware website contains the most up-to-date
    documentation. Contributions are always welcome!

Configuration

  - https://www.youtube.com/watch?v=3gwWVFtdg-4
    A good 20-minute overview of Marlin configuration by Tom Sanladerer.
    (Applies to Marlin 1.0.x, so Jerk and Acceleration should be halved.)
    Also... https://www.google.com/search?tbs=vid%3A1&q=configure+marlin

  - http://marlinfw.org/docs/configuration/configuration.html
    Marlin's configuration options are explained in more detail here.

Getting Help

  - http://forums.reprap.org/list.php?415
    The Marlin Discussion Forum is a great place to get help from other Marlin
    users who may have experienced similar issues to your own.

  - https://github.com/MarlinFirmware/Marlin/issues
    With a free GitHub account you can provide us with feedback, bug reports,
    and feature requests via the Marlin Issue Queue.

Contributing

  - http://marlinfw.org/docs/development/contributing.html
    If you'd like to contribute to Marlin, read this first!

  - http://marlinfw.org/docs/development/coding_standards.html
    Before submitting code get to know the Coding Standards.
*/
