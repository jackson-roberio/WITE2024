/**
* WITE 2024
* Robótica Educacional
* Desafio 			    : Muito Quente para Jogar
* Microcontrolador	: Arduino
* Autor				      : Jarles Santos
**/ 

#include "DHT.h" // Inclui a biblioteca do sensor DHT (necessária para usar DHT11/DHT22)

#define DHTPIN 7     // Define o pino digital ao qual o sensor está conectado
#define DHTTYPE DHT11 // Define o tipo de sensor utilizado (pode ser DHT11 ou DHT22)
#define led 5 // Define o pino digital ao qual o LED está conectado

DHT dht(DHTPIN, DHTTYPE); // Cria um objeto "dht" para se comunicar com o sensor, passando o pino e o tipo do sensor

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial a 9600 bps para enviar dados ao monitor serial
  dht.begin(); // Inicializa o sensor DHT
  pinMode(led, OUTPUT); // Configura o pino do LED como saída (permite ligar/desligar o LED)
}

void loop() {
  // Faz a leitura da umidade relativa do ar
  float humidity = dht.readHumidity();
  // Faz a leitura da temperatura em graus Celsius
  float temperature = dht.readTemperature();

  // Verifica se as leituras são válidas
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Falha ao ler do sensor DHT!");
    return;
  }

  // Imprime os valores lidos no monitor serial
  Serial.print("Umidade: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Controle do LED: acende se a temperatura for maior que 30 °C, senão apaga
  if (temperature > 30.0) {
      digitalWrite(led, HIGH); // Liga o LED
    } else {
    digitalWrite(led, LOW);  // Desliga o LED
   }

  delay(2000); // Aguarda 2 segundos antes de fazer uma nova leitura
}
