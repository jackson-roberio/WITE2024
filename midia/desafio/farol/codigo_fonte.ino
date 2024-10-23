/**
* WITE 2024
* Robótica Educacional
* Desafio : Farol
*/ 
#include <Servo.h>

Servo meuServo;  // Cria o objeto servo para controlar o servo motor

void setup() {
  meuServo.attach(3);  // Associa o servo motor ao pino 8
    digitalWrite(2, HIGH);
}

void loop() {
  for (int pos = 0; pos <= 180; pos += 1) { // Vai de 0 a 180 graus
    meuServo.write(pos);              // Diz ao servo para ir para a posição 'pos'
    delay(15);                        // Espera 15 ms para que o servo alcance a posição
  }
  for (int pos = 180; pos >= 0; pos -= 1) { // Vai de 180 a 0 graus
    meuServo.write(pos);              // Diz ao servo para ir para a posição 'pos'
    delay(15);                        // Espera 15 ms para que o servo alcance a posição
  }
}
