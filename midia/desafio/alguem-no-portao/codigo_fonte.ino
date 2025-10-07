/**
* WITE 2024
* Robótica Educacional
* Desafio : Alguém no Portão
* Microcontrolador : Arduino
* Autor : Jarles Santos
*/ 

// Definição de pinos
#define botao 5     // Pino onde o botão está conectado
#define buzzer 7   // Pino onde o buzzer está conectado

bool estadoBotao = false;    // Inicia a variável para armazenar o estado do botão, se pressionado ou não

void setup() {
  // Configura os pinos
  pinMode(botao, INPUT_PULLUP);  // Configura o pino do botão com resistência pull-up
  pinMode(buzzer, OUTPUT);      // Configura o pino do buzzer como saída 

}

void loop() {
  // Lê o estado do botão
  estadoBotao = digitalRead(botao);

  // Se o botão for pressionado (LOW porque está com PULLUP)
  if (estadoBotao == false) {
           
      // Emite som no buzzer
      tone(buzzer, 800, 300); // 800Hz por 300ms
      delay(350);
      tone(buzzer, 400, 600);  // 400Hz por 600ms
      delay(650);
           
    }

    else{
        
      // Interrompe o som no buzzer
      noTone(buzzer);
     
    }
  }
