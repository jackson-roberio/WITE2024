/**
* WITE 2024
* Robótica Educacional
* Desafio : Pega Ladrão
* Microcontrolador: Arduino
* Autor: Jarles Santos
*/ 



#define buzzer 7                                  //define a porta digital 7 do arduino para o buzzer.
#define sensorPresenca 5                          //define a porta digital 5 do arduino para o sensor de presença.

void setup() {
  pinMode(buzzer, OUTPUT);                        //define a porta digital 5, do buzzer, como uma saída de dados (som do alarme).
  pinMode(sensorPresenca, INPUT);                 //define a porta digital 7, do sensor, como uma entrada de dados (leitura de movimento).
  Serial.begin(9600);                             //ativa o monitor serial, para exibir o texto "MOVIMENTO DETECTADO" ou "SEM MOVIMENTO".
}

void loop() {
  bool valorSensor = digitalRead(sensorPresenca); // cria uma variável blooleada (pode ser apenas verdadeira ou falsa) e armazena o status do sensor de presença, se detectou movimento ou não.
  
  if (valorSensor){                               // verifica se o sensor detectou movimento.
      Serial.println("MOVIMENTO DETECTADO!");     // confirmado o movimento detectado, exibe a mensagem "MOVIMENTO DETECTADO".
      digitalWrite(buzzer, HIGH);                 // liga a saída digital relativa ao buzzer, acionando o alarme.
      
  }
    else {                                        // caso não haja movimento detectado pelo sensor, entrará nesta condição.
        digitalWrite(buzzer, LOW);                // desliga a saída digital relativa ao buzzer, mantendo o alarme desligado.
        Serial.println("SEM MOVIMENTO!");         // confirmado que não há movimento detectado, exibe a mensagem "SEM MOVIMENTO".
     
      
  }

}
