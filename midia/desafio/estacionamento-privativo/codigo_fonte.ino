/**
* WITE 2024
* Robótica Educacional
* Desafio : Estacionamento Privativo
*/
#include <Servo.h>

Servo servoMotor;
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 3;
const int distanciaLimite = 70; // Distância em cm para abrir a cancela

void setup() {
  servoMotor.attach(servoPin);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  servoMotor.write(0); // Cancela fechada
}

void loop() {
  long duracao, distancia;
  
  // Envia um pulso ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Recebe o eco
  duracao = pulseIn(echoPin, HIGH);
  
  // Calcula a distância em cm
  distancia = (duracao / 2) / 29.1;
  
  Serial.print("Distância: ");
  Serial.println(distancia);
  
  // Verifica a distância e abre/fecha a cancela
  if (distancia <= distanciaLimite) {
    servoMotor.write(90); // Abre a cancela
  } else {
    servoMotor.write(0); // Fecha a cancela
  }
  
  delay(500);
}
