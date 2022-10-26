/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 15
Line Tracking
By keyes
*/
void setup()
{
Serial.begin(9600);
}
void loop()
{
Serial.println(digitalRead(3)); // print the data from the sensor
delay(500);
}
