/**
* WITE 2024
* Robótica Educacional
* Desafio : Travessia Segura
*/ 
#define LedVermelho 21
#define LedAmarelo 19
#define LedVerde 5

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
