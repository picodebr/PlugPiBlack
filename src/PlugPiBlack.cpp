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

uint16_t PlugPiBlack::getLdrValue(void) { return analogRead(_ldrPin); }

void PlugPiBlack::playMusicalNote(enum musicalNotes musicalNote) {
  tone(_buzzerPin, musicalNote);
}

void PlugPiBlack::redLedOn() { digitalWrite(_redLedPin, true); }

void PlugPiBlack::redLedOff() { digitalWrite(_redLedPin, false); }

void PlugPiBlack::yellowLedOn() { digitalWrite(_yellowLedPin, true); }

void PlugPiBlack::yellowLedOff() { digitalWrite(_yellowLedPin, false); }

void PlugPiBlack::greenLedOn() { digitalWrite(_greenLedPin, true); }

void PlugPiBlack::greenLedOff() { digitalWrite(_greenLedPin, false); }
