/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 6
Passive Buzzer
By keyes
*/
int buzzer = 8; // set the buzzer control digital IO pin
void setup() {
  pinMode(buzzer, OUTPUT); // set pin 8 as output
}
void loop() {
  for (int i = 0; i < 100; i++) {  // make a sound
    digitalWrite(buzzer, HIGH); // send high signal to buzzer 
    delay(1); // delay 1ms
    digitalWrite(buzzer, LOW); // send low signal to buzzer
    delay(1);
  }
  delay(50);
  for (int j = 0; j < 100; j++) { //make another sound
    digitalWrite(buzzer, HIGH);
    delay(2); // delay 2ms
    digitalWrite(buzzer, LOW);
    delay(2);
  }
  delay(500);
}