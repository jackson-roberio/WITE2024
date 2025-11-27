/**
* WITE 2024
* Robótica Educacional
* Desafio           : Alimentos na Despensa
* Microcontrolador   : Arduino
* Autor              : Jarles Santos
**/

#include "DHT.h" // Inclui a biblioteca do sensor DHT

#define DHTPIN 7      // Pino do sensor
#define DHTTYPE DHT11 // Tipo do sensor
#define rele 8        // Pino ligado ao módulo relé

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(rele, OUTPUT);   // Configura o pino do relé como saída
  digitalWrite(rele, LOW); // Mantém o relé desligado inicialmente
}

void loop() {

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Falha ao ler do sensor DHT!");
    return;
  }

  Serial.print("Umidade: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Controle do motor via relé
  if (temperature > 30.0) {
      digitalWrite(rele, HIGH);  // Liga o relé (motor ON)
      Serial.println("Motor LIGADO");
  } else {
      digitalWrite(rele, LOW); // Desliga o relé (motor OFF)
      Serial.println("Motor DESLIGADO");
  }

  delay(2000);
}
