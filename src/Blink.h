#ifndef Blink_h
#define Blink_h

#include "Arduino.h"

class Blink {
public:
  Blink(uint8_t pinOut);
  void begin();
  void BlinkLED(uint32_t On, uint32_t Off);

private:
  uint8_t pin;
  int statusPin;
  uint32_t time;
  uint32_t timeOn;
  uint32_t timeOff;
  uint32_t CurrentTime;
};
#endif