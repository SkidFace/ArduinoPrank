#include <Servo.h>	 //imports the servo library to allow servos to be used
const int buttonPin = A0;      //these next lines define which pin is which and variables we need
int servoPin = 0;
int lastButtonState;    
int currentButtonState;
bool servoUsed = true;
Servo Servo1;

void setup() {
  pinMode(buttonPin, INPUT);
  currentButtonState = digitalRead(buttonPin); 		//sets the state of the button whether its on or off
  Servo1.attach(servoPin);	//tell the servo where it is
  Servo1.write(105); //the next few lines are in to make sure the servo works
  delay(1000);
  Servo1.write(110);
  delay(1000);
  Servo1.write(105);
}

void loop() {

  lastButtonState    = currentButtonState;      //These lines make the switch toggle
  currentButtonState = digitalRead(buttonPin); 
  

  if(lastButtonState == HIGH && currentButtonState == LOW) {  //If you want this to be used once, add this to the If statement: && servoUsed
	//if you need delay after the door opens, add 	delay(3000);
    Servo1.write(180);	//open the servo
    delay(1000);	//adds 1 second of delay 
    Servo1.write(105);	//close the servo
    servoUsed= false;	//tells the Arduino the servo has been used
    
   
}
}
