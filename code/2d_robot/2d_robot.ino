#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver Name =Adafruit_PWMServoDriver();

String data;
char d1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Name.begin();
  Name.setPWMFreq(60);
}

void loop() {
   ///////////////////////grab//////////////////////
if (Serial.available()){
    data =Serial.readString();
    d1=data.charAt(0);
    if (d1=='A')
            {

   Name.setPWM(0,0,290);//up
   delay(1000);   
   Name.setPWM(1,0,200);//left
  
   Name.setPWM(2,0,400);//right
   delay(1000); 
   Name.setPWM(0,0,320);//up
   delay(1000);           
            }    


//////////////////////release//////////////////////
    else if (d1=='a')
    {

   Name.setPWM(0,0,320);//up
   delay(1000);   
   Name.setPWM(1,0,400);//left
   
   // Servo.setPWM(1,0,700); //left
   
   
   Name.setPWM(2,0,200);//right
   delay(1000);

      
    }            

}


  /* Name.setPWM(0,0,290);//up
   delay(1000);   
   Name.setPWM(1,0,200);//left
  
   Name.setPWM(2,0,400);//right
   delay(1000); 






///////////////////////release//////////////////////
   Name.setPWM(0,0,320);//up
   delay(1000);   
   Name.setPWM(1,0,400);//left
   
   // Servo.setPWM(1,0,700); //left
   
   
   Name.setPWM(2,0,200);//right
   delay(1000);*/




   



}
