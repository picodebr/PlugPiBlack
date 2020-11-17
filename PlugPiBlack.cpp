#include <PlugPiBlack.h>

PlugPiBlack::PlugPiBlack() {}

void PlugPiBlack::setup() {
  Serial.begin(_baudRate);
  pinMode(_greenLedPin, OUTPUT);
  pinMode(_redLedPin, OUTPUT);
  pinMode(_yellowLedPin, OUTPUT);
  pinMode(_buzzerPin, OUTPUT);
  pinMode(_ldrPin, INPUT);
}
