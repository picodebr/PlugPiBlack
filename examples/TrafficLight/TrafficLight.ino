/*
  Semáforo com a Plug&Pi Black

  Esse exemplo mostra como fazer um semáforo
  com a placa Plug&Pi Black
*/

// Inclusão da biblioteca PlugPiBlack
#include <PlugPiBlack.h>

// Instância do objeto de configuração da placa
PlugPiBlack board;

void setup() {
  // Nada aqui pois a instância anterior
}

void loop() {
  // Comando de acionamento do led verde
  board.greenLedOn();
  // Pausa de 500 ms
  delay(500);

  // Comando para desligar o led verde
  board.greenLedOff();
  // Comando para acionar o led amarelo
  board.yellowLedOn();
  // Pausa de 500 ms
  delay(500);

  // Comando para desligar o led amarelo
  board.yellowLedOff();
  // Comando para acionar o led verme1lho
  board.redLedOn();
  // Pausa de 500 ms
  delay(500);

  // Comando para desligar o led vermelho
  board.redLedOff();
}