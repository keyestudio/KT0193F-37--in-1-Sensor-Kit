/*
  Keyes 37 in 1 Sensor Kit Upgraded Version
  Project 28
  Infrared Transmitter
  By keyes
*/
#include "PinDefinitionsAndMore.h"
#include <IRremote.h>

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);

    Serial.begin(115200);
    IrSender.begin(); // Start with IR_SEND_PIN as send pin and if NO_LED_FEEDBACK_CODE is NOT defined, enable feedback LED at default feedback LED pin
}

void loop() {

    IrSender.sendNECRaw(0x9D620102, 0);
    delay(1000);  // delay must be greater than 5 ms (RECORD_GAP_MICROS), otherwise the receiver sees it as one long signal
}
