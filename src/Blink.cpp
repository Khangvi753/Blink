#include "Blink.h"
Blink::Blink(uint8_t pinOut) {
  pin = pinOut;
}

void Blink::begin() {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
}

void Blink::BlinkLED(uint32_t On, uint32_t Off) {
  timeOn = On;
  timeOff = Off;
  time = millis();
  statusPin = digitalRead(pin);
  if (statusPin == HIGH && time - CurrentTime >= timeOn) {
    digitalWrite(pin, LOW);
    CurrentTime = millis();
  } else if (statusPin == LOW && time - CurrentTime >= timeOff) {
    digitalWrite(pin, HIGH);
    CurrentTime = millis();
  }
}
