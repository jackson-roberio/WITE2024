/**
* WITE 2024
* Robótica Educacional
* Desafio : Acessibilidade na Escola
* Microcontrolador : Arduino
* Autor : Jarles Santos
* Autor : Jackson Roberio
*/ 

// Definição de pinos
#define botao 7     // Pino onde o botão está conectado
#define led 5       // Pino onde o LED está conectado
#define buzzer 11   // Pino onde o speaker está conectado

bool estadoBotao = false;    // Inicia a variável para armazenar o estado do botão, se pressionado ou não

void setup() {
  // Configura os pinos
  pinMode(botao, INPUT_PULLUP);  // Configura o pino do botão com resistência pull-up
  pinMode(led, OUTPUT);          // Configura o pino do LED como saída
  pinMode(buzzer, OUTPUT);      // Configura o pino do speaker como saída 

}

void loop() {
  // Lê o estado do botão
  estadoBotao = digitalRead(botao);

  // Se o botão for pressionado (LOW porque está com PULLUP)
  if (estadoBotao == false) {
      // Acende o LED
      digitalWrite(led, HIGH);
      // Emite som no buzzer
      tone(buzzer, 1000);  // Frequência de 1000 Hz      
    } else { 
      // Desliga o LED e o som
      digitalWrite(led, LOW);
      // Interrompe o som no buzzer
      noTone(buzzer);
    }
  }
