#include <PlugPiBlack.h>

PlugPiBlack board;

void setup() {}

void loop() {
  board.greenLedOn();
  delay(500);
  board.greenLedOff();
  board.yellowLedOn();
  delay(500);
  board.yellowLedOff();
  board.redLedOn();
  delay(500);
  board.redLedOff();
}