#include <PlugPiBlack.h>

PlugPiBlack board;

void setup() {}

void loop() {
  board.playMusicalNote(DO);
  delay(500);
  board.playMusicalNote(RE);
  delay(500);
  board.playMusicalNote(MI);
  delay(500);
  board.playMusicalNote(FA);
  delay(500);
  board.playMusicalNote(SOL);
  delay(500);
  board.playMusicalNote(LA);
  delay(500);
  board.playMusicalNote(SI);
  delay(500);
}