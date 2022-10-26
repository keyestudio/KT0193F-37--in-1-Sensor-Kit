/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 2
7 Color flashing LED
By keyes 
*/
int LEDPin = 4; // select a digital pin for the LED
//  Initialization
void setup() 
{ 
  pinMode (LEDPin, OUTPUT);
  Serial.begin (9600);      // Set output window comm rate
}
void loop() 
{
  // Turn the LED on for 10 seconds and then off for 2
  Serial.println ("LED Turned ON");
  digitalWrite (LEDPin, HIGH);
  delay(10000);
  Serial.println ("LED Turned OFF");
  digitalWrite (LEDPin, LOW);
  delay(2000);
}
