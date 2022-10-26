/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 7
Laser
By keyes 
*/
int laserPin = 8;
void setup() {                
  pinMode(laserPin, OUTPUT);  // Define the digital output interface pin 8 
}
void loop() {
  digitalWrite(laserPin, HIGH); // Turn on the laser head
  delay(1000); // wait for one second
  digitalWrite(laserPin, LOW); // Turn off the laser head
  delay(1000); 
}
