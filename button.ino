#include <Servo.h>
const int buttonPin = A0;      
int servoPin = 1;
int lastButtonState;    
int currentButtonState;
bool servoUsed = true;
Servo Servo1;

void setup() {
  pinMode(buttonPin, INPUT);
  currentButtonState = digitalRead(buttonPin);
  Servo1.attach(servoPin);
  Servo1.write(105);
  delay(1000);
  Servo1.write(110);
  delay(1000);
  Servo1.write(105);
}

void loop() {

  lastButtonState    = currentButtonState;      
  currentButtonState = digitalRead(buttonPin); 
  

  if(lastButtonState == HIGH && currentButtonState == LOW) {  // && servoUsed
 //   delay(3000);
    Servo1.write(180);
    delay(1000);
    Servo1.write(105);
    servoUsed= false;
    
   
}
}
