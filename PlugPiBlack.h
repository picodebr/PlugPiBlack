#ifndef __PLUGPIBLACK_H__
#define __PLUGPIBLACK_H__

#include <Arduino.h>

class PlugPiBlack {
 public:
  PlugPiBlack();
  void setup(void);

 private:
  const uint8_t _greenLedPin = 9;
  const uint8_t _redLedPin = 5;
  const uint8_t _yellowLedPin = 10;
  const uint8_t _buzzerPin = 13;
  const uint8_t _ldrPin = 18;
  uint8_t _baudRate = 115200;
};

#endif  // __PLUGPIBLACK_H__