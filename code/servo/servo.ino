// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 22; 
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   pinMode(22,OUTPUT);
   Servo1.attach(22); 
}
void loop(){ 
   // Make servo go to 0 degrees 
   Servo1.write(80); 
   delay(1000); 
   // Make servo go to 90 degrees 
 
}