/**
* WITE 2024
* Robótica Educacional
* Desafio : Incêndio na cozinha
* Microcontrolador : Arduino Uno
* Autor : Jackson Roberio - https://jacksonroberio.com.br
* Co-Autor : Thiago Valneir
*/ 

//Importa a library do DHT11, captador de temperatura e umidade.
#include "DHT.h"

//Saída de som através do Speaker, encaixa na porta 4 do Arduino.
#define autoFalante 4

//Encaixe o pino de dados do DHT11 na porta 7 do Arduino.
#define DHTPIN 7

//Variável consumida pelo DHT11, se for trabalhar com o DHT22 é só mudar de DHT11 para DHT22 abaixo.
#define DHTTYPE DHT11 

//Método que seta/relaciona a porta ao DHT11.
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx iniciado captação de temperatura!"));
  pinMode(autoFalante, OUTPUT);
  dht.begin();
}

void loop() {
  delay(3000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  //Verifica se conseguiu coletar a tempratura ambiente
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Calcular índice de calor em Fahrenheit
  float hif = dht.computeHeatIndex(f, h);
  // Calcule o índice de calor em Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Humidade: "));
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

  //Verifica a temperatura em graus celcius e emite um alerta sonoro a depender da temperatura
  if (t > 30.00) {
    tone(autoFalante, 300);
    delay(500);
    noTone(autoFalante);
    delay(500);
    tone(autoFalante, 300);
    delay(500);
    noTone(autoFalante);
    delay(500);
  } 

}