/**
* WITE 2024
* Robótica Educacional
* Desafio : Horta da escola
*/ 
#define sensor 27
#define led 13

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  if(digitalRead(sensor)){
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
  }
  
}
