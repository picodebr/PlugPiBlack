#include <PlugPiBlack.h>

PlugPiBlack::PlugPiBlack() {}

void PlugPiBlack::setup() {
  pinMode(_greenLedPin, OUTPUT);
  pinMode(_redLedPin, OUTPUT);
  pinMode(_yellowLedPin, OUTPUT);
  pinMode(_buzzerPin, OUTPUT);
  pinMode(_ldrPin, INPUT);
}
