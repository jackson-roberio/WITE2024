/**
* WITE 2024
* Robótica Educacional
* Desafio : Pega Ladrão
* Microcontrolador	: ESP8266
* Autor				: Jackson Roberio - https://jacksonroberio.com.br
**/ 

#define AutoFalante 8
#define presenca 4

void setup() {
  pinMode(AutoFalante, OUTPUT);
  pinMode(presenca, INPUT);
}

void loop() {
  bool valorSensor = digitalRead(presenca);
  
  if (valorSensor){
    Serial.println("DETECTADO");
    for (int i = 0; i <= 5; i++){
      tone(AutoFalante, 300);
      delay(500);
      noTone(AutoFalante);
      delay(500);
    }
  } 

}
