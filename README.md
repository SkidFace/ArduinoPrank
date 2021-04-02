# ArduinoPrank

A quick project I made to prank people powered by an Arduino.

When the target opens a door, a servo will open up and release whatever projectile you want, whether its marbles(don't recomend), beads, beans, rice, or powder. 

<h2>Instructions:</h2>

Using a reed switch (door sensor), an Arduino Uno, a servo, one 330 ohm resistor, a handful of wires, and a few 3D printed parts, you can make this too. (I will include links to all of these parts.)

Connect all of your parts as shown in this diagram. Please note the program I used does not have a reed switch, so I have replaced it with a button to represent it. To wire the sensor, remove the button, take the reed switch and connect one of its terminals to F16, and the other to D14. 

![image](https://user-images.githubusercontent.com/74504657/112867787-29fb3d00-9070-11eb-94e9-2f211c0ee491.png)

For the code, go to the door.ino file. Put it into the Arduino IDE (https://www.arduino.cc/en/software if you dont have it). Plug your arduino in and upload it.

After that, you need to 3D print the parts. Go to https://www.thingiverse.com/thing:4810401 to get them. (I designed these.)

When you finished that, screw the Arduino into the arduino_uno_bottom part. Next, assemble the DROPPER.stl file by glueing the bigger flat piece to the top to make a chamber that holds the projectile. Then slide the servo into place, and glue it. This next step is tricky. Take the smaller square and glue it onto the arm of the servo and make sure it can allow the servo to open and close the chamber. If you want to increase the capacity of the dropper, print magazine.stl and simply slide it on the top of the dropper. Load the projectiles. 

Mount the wired part of the door sensor on the top of the door frame, and the magnet side the the door itself. Glue the dropper part to the side of the Arduino case. Mount the case to the top of the door frame. For extra storage, insert the magazine. To power with a battery, use a 9V battery and an adapter for an arduino. 

<h2>Pictures and Videos:</h2>


https://user-images.githubusercontent.com/74504657/113441817-cd678d00-93a3-11eb-8934-589be6c2955e.mov

![image0 (2)](https://user-images.githubusercontent.com/74504657/113441824-d193aa80-93a3-11eb-8a87-b7b23a4277d1.jpeg)

![image1 (2)](https://user-images.githubusercontent.com/74504657/113441829-d48e9b00-93a3-11eb-9bd7-61eef78fe905.jpeg)

![image2](https://user-images.githubusercontent.com/74504657/113441845-d7898b80-93a3-11eb-9316-63cbe2bff0ce.jpeg)


<h2>Where to get the parts:</h2>

Arduino Uno (cheaper variant)($14): https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU/ref=sxin_10_ac_d_pm?ac_md=1-0-VW5kZXIgJDIw-ac_d_pm&cv_ct_cx=arduino+uno&dchild=1&keywords=arduino+iuno&pd_rd_i=B01EWOE0UU&pd_rd_r=22081792-35d4-4de0-a50d-f63460ab5b78&pd_rd_w=IEcX8&pd_rd_wg=XGbvC&pf_rd_p=fbf6011c-6632-49e8-9631-4e76f7f44920&pf_rd_r=TGSTDV485NEYHXFEJ87X&psc=1&qid=1617038791&sr=1-1-22d05c05-1231-4126-b7c4-3e7a9c0027d0

Door Sensor($7): https://www.amazon.com/Gikfun-Sensor-Magnetic-Switch-Arduino/dp/B0154PTDFI/ref=as_li_ss_tl?keywords=arduino+door+sensor&qid=1582891263&sr=8-4&linkCode=sl1&tag=zlufy-20&linkId=b8a658345ba98a05e3bdd9db630a282a&language=en_US

Resistor($5): https://www.amazon.com/EDGELEC-Resistor-Tolerance-Resistance-Optional/dp/B07HDFFN81/ref=sr_1_2_sspa?crid=2IQNDEHPJXCJT&dchild=1&keywords=330+ohm+resistors&qid=1617038934&s=industrial&sprefix=330+%2Cindustrial%2C213&sr=1-2-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyQTZQQ1E1Tkc0Mko4JmVuY3J5cHRlZElkPUEwNDUwMDg0M0k4MUk1R0w0WEs3SyZlbmNyeXB0ZWRBZElkPUExMDA1ODU4M0NZV0Y3SURDU0hGNSZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=

Wires($7): https://www.amazon.com/Elegoo-EL-CP-004-Multicolored-Breadboard-arduino/dp/B01EV47GI4/ref=sr_1_1_sspa?crid=33H41HSB99MBI&dchild=1&keywords=wire%2Bfor%2Barduino&qid=1617038977&s=industrial&sprefix=wire%2Bfor%2Ba%2Cindustrial%2C208&sr=1-1-spons&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyNjJFVTBTSEpETFNXJmVuY3J5cHRlZElkPUEwMjU2NjQxMklGQjNZOVY2VERQUSZlbmNyeXB0ZWRBZElkPUEwOTQ1MzIxMUVLUFZPSjk1OTFYOSZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU&th=1

This  UV glue REALLY helps but is optional($23): https://www.amazon.com/Bondic-Activated-Waterproof-Resistant-Adhesive/dp/B018IBEHQU/ref=sr_1_1_sspa?dchild=1&keywords=bondic&qid=1617039064&s=industrial&sr=1-1-spons&psc=1&smid=A2FQ5GG01HBOZ1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExN1QwT1NXQVdFNDNHJmVuY3J5cHRlZElkPUEwNzg5NzQwMUYyT0JUVFUyRjZSRyZlbmNyeXB0ZWRBZElkPUEwMzk5MDUxMVNQU0k0UkRHRldRWiZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=

Don't have a 3D printer? I recomend this one($200): https://www.amazon.com/Creality-Economic-Printing-Function-220x220x250MM/dp/B07CGMN3XF/ref=sr_1_1_sspa?dchild=1&keywords=ender+3&qid=1617039109&s=industrial&sr=1-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFYMzYwS1Y4NTVROEwmZW5jcnlwdGVkSWQ9QTA1Mzk4OTkzMDNEQ1o4NDVDSUJUJmVuY3J5cHRlZEFkSWQ9QTAxNzcwMDVVUVFUSDRVRVpTTVgmd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl

9V batteries($11): https://www.amazon.com/Duracell-Coppertop-Alkaline-Batteries-Count/dp/B000K2NW08/ref=sr_1_2_sspa?dchild=1&keywords=9v+battery&qid=1617039196&sr=8-2-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExQzhTNTRFRkpRVE4yJmVuY3J5cHRlZElkPUEwODQ4NTA0MlQzUjRFNkdFWEhQUSZlbmNyeXB0ZWRBZElkPUEwMTk4NzkxMkswVEdXMzJSVVVHQiZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=

Adaptor for battery($6): https://www.amazon.com/Battery-Power-Barrel-Connector-Arduino/dp/B07NT79ZVB/ref=sr_1_8?dchild=1&keywords=arduino+battery&qid=1617039147&s=industrial&sr=1-8

In total for all the nessesary parts(if you already have a 3D printer and some glue) you are looking at a price of $33.
