/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 24
Digital Temperature
By keyes
*/
#include <math.h>
void setup()
{
   Serial.begin(9600);
}
void loop()
{
  double val=analogRead(0);
  double fenya=(val/1023)*5;
  double r=fenya/(5-fenya)*10000;
  Serial.println( 1/(  log(r/10000) /3950 + 1/(25+273.15))-273.15);
  delay(1000);
}
