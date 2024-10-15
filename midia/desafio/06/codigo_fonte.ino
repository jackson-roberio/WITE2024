// Definição de pinos
const int botaoPin = 21;     // Pino onde o botão está conectado
const int ledPin = 17;       // Pino onde o LED está conectado
const int speakerPin = 15;   // Pino onde o speaker está conectado

bool estadoBotao = false;    // Variável para armazenar o estado do botão

void setup() {
  // Configura os pinos
  pinMode(botaoPin, INPUT_PULLUP);  // Configura o pino do botão com resistência pull-up
  pinMode(ledPin, OUTPUT);          // Configura o pino do LED como saída
  pinMode(speakerPin, OUTPUT);      // Configura o pino do speaker como saída

  // Inicializa os pinos como desligados
  digitalWrite(ledPin, LOW);
  digitalWrite(speakerPin, LOW);
}

void loop() {
  // Lê o estado do botão
  estadoBotao = digitalRead(botaoPin);

  // Se o botão for pressionado (LOW porque está com PULLUP)
  if (estadoBotao == LOW) {
    for(int i = 0; i <= 6; i++){
    
      // Acende o LED
      digitalWrite(ledPin, HIGH);
    
      // Emite som no speaker
      tone(speakerPin, 1000);  // Frequência de 1000 Hz
    
      // Aguarda 500ms
      delay(500);
    
      // Desliga o LED e o som
      digitalWrite(ledPin, LOW);
      noTone(speakerPin);
    
      // Aguarda mais 500ms
      delay(500);
    }
  }
}
