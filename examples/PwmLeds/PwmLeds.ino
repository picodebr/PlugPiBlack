/*
  Controle Pwm dos Leds Plug&Pi PlugPiBlack

  Esse exemplo mostra como aumentar e diminuir
  o brilho dos leds através das funções de pwm
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
  // Inicio de um laço para acender o led de 0 a 100%
  for (int i = 0; i <= 100; i++) {
    // Comando de controle pwm do led verde
    board.greenLedPercent(i);
    // Tempo de transição de luminosidade
    delay(100);
  }

  // Mesma repetição para o led amarelo
  for (int i = 0; i <= 100; i++) {
    board.yellowLedPercent(i);
    delay(100);
  }

  // E para o led vermelho
  for (int i = 0; i <= 100; i++) {
    board.redLedPercent(i);
    delay(100);
  }

  // Repetição indo de 100 a 0% para desligar o led verde
  for (int i = 100; i <= 0; i--) {
    board.greenLedPercent(i);
    delay(100);
  }

  // Amarelo
  for (int i = 100; i <= 0; i--) {
    board.yellowLedPercent(i);
    delay(100);
  }

  // E vermelho
  for (int i = 100; i <= 0; i--) {
    board.redLedPercent(i);
    delay(100);
  }
}