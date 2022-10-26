/*
Keyes 37 in 1 Sensor Kit Upgraded Version
Project 4
SMD RGB LED
By keyes 
*/
int bluepin =9; // select the pin for the blue LED
int redpin = 10; //select the pin for the red LED
int greenpin =11;// select the pin for the green LED
int val;
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  }
void loop() 
{for(val=255; val>0; val--)
  {analogWrite(11, val);
   analogWrite(10, 255-val);
   analogWrite(9, 128-val);
   delay(1); 
  }
for(val=0; val<255; val++)
  {analogWrite(11, val);
   analogWrite(10, 255-val);
   analogWrite(9, 128-val);
   delay(1);  
  }
}
