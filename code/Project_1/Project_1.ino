/*
  Keyes 37 in 1 Sensor Kit Upgraded Version
  Project 1
  Two Color LED
  By keyes
*/
int redled = 11;                    //pin for red signal
int yellowled = 10;                 //pin for yellow signal
void setup()
{
  pinMode(redled,OUTPUT);           //Set Pin11 as output
  pinMode(yellowled,OUTPUT);        //Set Pin10 as output
}
void loop()
{
  digitalWrite(redled,HIGH);        //Turn on the red led
  digitalWrite(yellowled,LOW);      //Turn off the yellow led
  delay(1000);                      // delay for 1000ms
  digitalWrite(redled,LOW);         //Turn off the red led
  digitalWrite(yellowled,HIGH);     //Turn on the yellow led
  delay(1000);                      //delay for 1000ms
}
