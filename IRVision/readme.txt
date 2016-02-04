This is a C++ library for Arduino for controlling a Pixart sensor from a WiiMote over I2C.

You must first hook up the sensor to a 25MhZ, 3.3V regulator, and an interface chip.
(And of course, remove a Pixart sensor from the Wiimote to begin with)

For hardware considerations see:

http://stephenhobley.com/blog/2009/02/22/pixart-sensor-and-arduino/

Based on the code by Kako
http://www.kako.com/neta/2007-001/2007-001.html

Steve Hobley 2009 - www.stephenhobley.com

Updated by Arsenio Dev 2016 - www.tminusarduino.com

Installation
--------------------------------------------------------------------------------

To install this library, just place this entire folder as a subfolder in your
Arduino/lib/targets/libraries folder.

When installed, this library should look like:

Arduino/lib/targets/libraries/IRVision              (this library's folder)
Arduino/lib/targets/libraries/IRVision/IRVision.cpp  (the library implementation file)
Arduino/lib/targets/libraries/IRVision/IRVision.h    (the library description file)
Arduino/lib/targets/libraries/IRVision/keywords.txt (the syntax coloring file)
Arduino/lib/targets/libraries/IRVision/readme.txt   (this file)

Building
--------------------------------------------------------------------------------

After this library is installed, you just have to start the Arduino application.
You may see a few warning messages as it's built.

To use this library in a sketch, go to the Sketch | Import Library menu and
select IRVision.  This will add a corresponding line to the top of your sketch:
#include <IRVision.h>

To stop using this library, delete that line from your sketch.

Geeky information:
After a successful build of this library, a new file named "IRVision.o" will appear
in "Arduino/lib/targets/libraries/IRVision". This file is the built/compiled library
code.

If you choose to modify the code for this library (i.e. "IRVision.cpp" or "IRVision.h"),
then you must first 'unbuild' this library by deleting the "IRVision.o" file. The
new "IRVision.o" with your code will appear after the next press of "verify"
