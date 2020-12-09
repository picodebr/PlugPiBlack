#include <PlugPiBlack.h>

PlugPiBlack board;

void setup() { Serial.begin(9600); }

void loop() {
  int lightLevel = board.getLdrValue();
  Serial.println(lightLevel);
}