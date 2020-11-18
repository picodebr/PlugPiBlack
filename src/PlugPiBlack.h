#ifndef __PLUGPIBLACK_H__
#define __PLUGPIBLACK_H__

#include <Arduino.h>

enum musicalNotes {
  DO = 65,
  RE = 73,
  MI = 82,
  FA = 87,
  SOL = 98,
  LA = 110,
  SI = 123
};

class PlugPiBlack {
 public:
  PlugPiBlack();
  void setup(void);
  uint16_t getLdrValue(void);

  void playMusicalNote(enum musicalNotes musicalNote);

 private:
  const uint8_t _greenLedPin = 9;
  const uint8_t _redLedPin = 5;
  const uint8_t _yellowLedPin = 10;
  const uint8_t _buzzerPin = 13;
  const uint8_t _ldrPin = 18;
  uint8_t _baudRate = 115200;
};

#endif  // __PLUGPIBLACK_H__