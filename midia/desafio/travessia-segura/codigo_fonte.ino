/**
* WITE 2024
* Robótica Educacional
* Desafio : Travessia Segura
* Autor : Jackson Roberio
*/ 
#define LedVermelho D7
#define LedAmarelo D5
#define LedVerde D3

void setup() {
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedAmarelo, OUTPUT);
  pinMode(LedVerde, OUTPUT);
}

void loop() {
  digitalWrite(LedVerde, LOW);  
  digitalWrite(LedVermelho, HIGH);
  delay(3000);
  digitalWrite(LedVermelho, LOW);
  digitalWrite(LedAmarelo, HIGH);
  delay(3000);
  digitalWrite(LedAmarelo, LOW);
  digitalWrite(LedVerde, HIGH); 
  delay(3000); 
}