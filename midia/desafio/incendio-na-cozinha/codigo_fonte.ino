/**
* WITE 2024
* Robótica Educacional
* Desafio 			: Incêndio na Cozinha
* Microcontrolador	: Arduino
* Autor				: Jarles Santos
**/ 


#define sensorFumaca A0     // Define o pino digital ao qual o sensor está conectado
#define buzzer 5 // Define o pino digital ao qual o buzzer está conectado

int valorLeituraSensor;

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial a 9600 bps para enviar dados ao monitor serial
  pinMode(sensorFumaca, INPUT); // Declara o pino do sensor como pino de entrada
  pinMode(buzzer, OUTPUT); // Configura o pino do buzzer como saída (permite ligar/desligar o buzzer)
}  

void loop() {
 
  valorLeituraSensor = analogRead(sensorFumaca); //Leitura de dados do sensor
  Serial.print("Valor detectado pelo sensor: "); //Imprime a mensagem no monitor serial
  Serial.println(valorLeituraSensor); //Imprime valores de leitura encontrados no monitor serial
  if (valorLeituraSensor >= 200) //Verifica se o valor de leitura do sensor é maior ou igual a 200
  {
    Serial.println("Fumaça detectada!"); //Imprime a mensagem no monitor serial
    digitalWrite(buzzer, HIGH); //Liga o buzzer
  }
  else {
    Serial.println("Fumaça não detectada!"); //Imprime a mensagem no monitor serial
    digitalWrite(buzzer, LOW); //Desliga o buzzer
  }
  delay(1000); //Repete a leitura a cada 1 segundo


}
