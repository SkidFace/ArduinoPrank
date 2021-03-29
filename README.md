# ArduinoPrank

A quick code I wrote to prank my parents powered by an Arduino.

When the target opens a door, a servo will open up and release whatever projectile you want, whether its marbles(don't recomend), beads, beans, rice, or powder. 

<h2>Instructions:</h2>

Using a reed switch (door sensor), an Arduino Uno, a servo, one 330 ohm resistor, a handful of wires, and a few 3D printed parts, you can make this too. (I will include links to all of these parts.)

Connect all of your parts as shown in this diagram. Please note the program I used does not have a reed switch, so I have replaced it with a button to represent it. To wire the sensor, remove the button, take the reed switch and connect one of its terminals to F16, and the other to D14. 

![image](https://user-images.githubusercontent.com/74504657/112867787-29fb3d00-9070-11eb-94e9-2f211c0ee491.png)

For the code, go to 

After that you need to 3D print the parts. Go to https://www.thingiverse.com/thing:4810401 to get them. (I designed these.)

When you finished that, screw the arduino into the arduino_uno_bottom part. Next, assemble the DROPPER.stl file by glueing the bigger flat piece to the top to make a chamber that holds the projectile. Then slide the servo into place, and glue it. This next step is tricky. Take the smaller square and glue it onto the arm of the servo and make sure it can allow the servo to open and close the chamber. If you want to increase the capacity of the dropper, print magazine.stl and simply slide it on the top of the dropper. Load the projectiles. 

Mount the wired part of the door sensor on the top of the door frame, and the magnet side the the door itself. 
