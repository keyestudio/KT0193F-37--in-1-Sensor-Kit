/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 3
DIP RGB LED
By keyes 
*/
const int redpin = 11; // select the pin for the red LED
const int bluepin = 10; // select the pin for the blue LED
const int greenpin = 9; // select the pin for the green LED
int val;
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  for(val = 255; val > 0; val--)
  {
    analogWrite(redpin, val);
    analogWrite(bluepin, 255 - val);
    analogWrite(greenpin, 128 - val);
    Serial.println(val, DEC);
    delay(5); 
  }
  for(val = 0; val < 255; val++)
  {
    analogWrite(redpin, val);
    analogWrite(bluepin, 255 - val);
    analogWrite(greenpin, 128 - val);
    Serial.println(val, DEC);
    delay(5); 
  }
}
