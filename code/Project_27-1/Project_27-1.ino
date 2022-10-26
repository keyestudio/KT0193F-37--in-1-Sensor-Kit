/*
  Keyes 37 in 1 Sensor Kit Upgraded Version
  Project 27-1
  Infrared Receiver
  By keyes
*/
#include "PinDefinitionsAndMore.h"
#include <IRremote.hpp>

#define DECODE_NEC 

void setup() {
  
    Serial.begin(115200);
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);

}

void loop() {
   
    if (IrReceiver.decode()) {  
        // Print a short summary of received data
        IrReceiver.printIRResultShort(&Serial);
        Serial.println();

        IrReceiver.resume(); // Enable receiving of the next value     
    }
}
