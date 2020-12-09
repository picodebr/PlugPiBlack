#include <PlugPiBlack.h>

PlugPiBlack board;

void setup() {}

void loop() {
  for (int i = 0; i <= 100; i++) {
    board.greenLedPercent(i);
    delay(100);
  }
  for (int i = 0; i <= 100; i++) {
    board.yellowLedPercent(i);
    delay(100);
  }
  for (int i = 0; i <= 100; i++) {
    board.redLedPercent(i);
    delay(100);
  }
  for (int i = 100; i <= 0; i--) {
    board.greenLedPercent(i);
    delay(100);
  }
  for (int i = 100; i <= 0; i--) {
    board.yellowLedPercent(i);
    delay(100);
  }
  for (int i = 100; i <= 0; i--) {
    board.redLedPercent(i);
    delay(100);
  }
}