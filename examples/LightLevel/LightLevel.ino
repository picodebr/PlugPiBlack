/*
  Leitura de Nível de Luz Plug&Pi Black

  Esse exemplo consiste em realizar a leitura do sensor de luz
  LDR e imprimir no monitor serial
*/

// Inclusão da biblioteca PlugPiBlack
#include <PlugPiBlack.h>

// Declara o objeto para configuração inicial da placa
PlugPiBlack board;

void setup() {
  // Configuração inicial da comunicação Serial
  Serial.begin(9600);
}

void loop() {
  // Leitura do sensor de luz
  int lightLevel = board.getLdrValue();

  // Impressão no monito serial
  Serial.println(lightLevel);
}