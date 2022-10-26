/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 5
Active Buzzer
By keyes DIY
*/
int buzzerPin = 8;
void setup ()
{
  pinMode (buzzerPin, OUTPUT);
}
void loop ()
{
  digitalWrite (buzzerPin, HIGH);
  delay (500);
  digitalWrite (buzzerPin, LOW);
  delay (500);
}
