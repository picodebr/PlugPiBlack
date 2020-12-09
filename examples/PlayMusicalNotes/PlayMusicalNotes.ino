/*
  Tocar notas musicais Plug&Pi PlugPiBlack

  Esse exemplo mostra como tocar notas musicais
  com a placa Plug&Pi Black

  Notas Musicais
  - DO
  - RE
  - MI
  - SOL
  - LA
  - SI
*/

// Inclusão da biblioteca PlugPiBlack
#include <PlugPiBlack.h>

// Instância do objeto de configuração da placa
PlugPiBlack board;

void setup() {
  // Nada aqui pois a instância anterior
  // já realiza as configurações necessárias
}

void loop() {
  // Comando para tocar nota musical
  board.playMusicalNote(DO);
  // Tempo de duração do Toque
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