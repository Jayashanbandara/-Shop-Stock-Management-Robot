void setup() {
  // put your setup code here, to run once:
Serial1.begin(9600);

//Serial1.write("G91");
//Serial1.write("G01 Y-500");
//Serial1.write("G90");

Serial1.write("G91");
delay(100);
Serial1.write("G01 Y3");
delay(100);
Serial1.write("G90");
delay(100);

}

void loop() {
  // put your main code here, to run repeatedly:

}
