/*
  Keyes 37 in 1 Sensor Kit Upgraded Version
  Project 14
  Photo Interrupter
  By keyes
*/
int Led = 13; // define LED pin
int buttonpin = 3; // define photo interrupter signal pin
int val; //define a numeric variable
void setup()
{
  pinMode(Led, OUTPUT); // LED pin as output
  pinMode(buttonpin, INPUT); //photo interrupter pin as input
}
void loop()
{
  val = digitalRead(buttonpin); //read the value of the sensor
  if (val == HIGH) // turn on LED when sensor is blocked
  {
    digitalWrite(Led, HIGH);
  }
  else
  {
    digitalWrite(Led, LOW);
  }
}
