// Stepper Motor X
  const int XdirPin = 2; // X.DIR
  const int XstepPin = 3; //X.STEP
  
  const int YdirPin = 4; // Y.DIR
  const int YstepPin = 5; //Y.STEP
  int x=0;
 void setup() {
 // Sets the two pins as Outputs
 pinMode(XdirPin,OUTPUT);
 pinMode(XstepPin,OUTPUT); 
 pinMode(YdirPin,OUTPUT);
 pinMode(YstepPin,OUTPUT); 
 
 }

void x_axis()
{
digitalWrite(XdirPin,LOW); //Changes the rotations right direction
 // Makes 400 pulses for making two full cycle rotation
 for( x = 0; x < 5001; x++) {
 digitalWrite(XstepPin,HIGH);
 delayMicroseconds(1000);
 digitalWrite(XstepPin,LOW);
 delayMicroseconds(1000);
 }
 delay(2000); 

  
digitalWrite(XdirPin,HIGH); //Changes the rotations left direction
 // Makes 400 pulses for making two full cycle rotation
 for( x = 5001; x > 0; x--) {
 digitalWrite(XstepPin,HIGH);
 delayMicroseconds(1000);
 digitalWrite(XstepPin,LOW);
 delayMicroseconds(1000);
 }
 delay(2000);





}

void y_axis()
{

digitalWrite(YdirPin,LOW); // Enables the motor to move in a up direction
 // Makes 200 pulses for making one full cycle rotation
 for(int yu = 0; yu < 200; yu++) {
 digitalWrite(YstepPin,HIGH); 
 delayMicroseconds(800); 
 digitalWrite(YstepPin,LOW); 
 delayMicroseconds(800); 
 }
 delay(1000); // One second delay

  
/*digitalWrite(YdirPin,HIGH); // Enables the motor to move in a down direction
 // Makes 200 pulses for making one full cycle rotation
 for(int y = 0; y < 200; y++) {
 digitalWrite(YstepPin,HIGH); 
 delayMicroseconds(800); 
 digitalWrite(YstepPin,LOW); 
 delayMicroseconds(800); 
 }
 delay(1000); // One second delay
 */
 
 



  
}


 
 void loop() {
 
 
 x_axis();
 y_axis();
 
 }