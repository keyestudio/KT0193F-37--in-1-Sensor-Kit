/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 16
Obstacle Avoidance
By keyes
*/
int ledPin = 13; // LED pin on arduino
int detectorPin = 3; // obstacle avoidance sensor interface
int val; // variable to store result
void setup()
{
pinMode(ledPin, OUTPUT); // Define LED as output interface
pinMode(detectorPin, INPUT); // Define obstacle avoidance sensor as input interface
//digitalWrite(enablePin, HIGH); // Enable sensor
}
void loop()
{
val = digitalRead(detectorPin); // Read value from sensor
if(val == LOW) // When the sensor detects an obstacle, the LED on the Arduino lights up
{
digitalWrite(ledPin, HIGH);
}
else
{
digitalWrite(ledPin, LOW);
}
}
