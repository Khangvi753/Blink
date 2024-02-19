#include "Blink.h"
Blink Blink(2);  // Blink(pin connected)
void setup() {
  Blink.begin();
}

void loop() {
  Blink.BlinkLED(2000, 5000);  // BlinkLED(time LED on , time LED off)
}
