/**
* WITE 2024
* Robótica Educacional
* Desafio 			: Muito Quente para Jogar
* Microcontrolador	: ESP32
* Autor				: Jackson Roberio - https://jacksonroberio.com.br
**/ 

//Importa a library do DHT11, captador de temperatura e umidade.
#include "DHT.h"

//Encaixe o pino de dados do DHT11 na porta 4 (D4 geralmente) do ESP32.
#define DHTPIN 4

//Encaixe o pino de led na porta 23 (D23 geralmente) do ESP32.
#define led 23

//Variável consumida pelo DHT11, se for trabalhar com o DHT22 é só mudar de DHT11 para DHT22 abaixo.
#define DHTTYPE DHT11

//Método que seta/relaciona a porta ao DHT11.
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx iniciado captação de temperatura!"));
  pinMode(led, OUTPUT);
  dht.begin();
}

void loop() {
  // É necessário essa espera devido ao delay do sensor
  delay(3000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  // Verifica se conseguiu realizar a medição da temperatura
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Calcular índice de calor em Fahrenheit
  float hif = dht.computeHeatIndex(f, h);
  // Calcule o índice de calor em Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Umidade: "));
  Serial.print(h);
  Serial.print(F("%  Temperatura: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.print(F("°F  Índice de calor: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));

  //Verifica a temperatura em graus celcius e liga o mini-motor se necessário
  if (t > 30.00) {
    digitalWrite(led, HIGH);  // led ligado
  } else {
    digitalWrite(led, LOW);   // led desligado
  }

}