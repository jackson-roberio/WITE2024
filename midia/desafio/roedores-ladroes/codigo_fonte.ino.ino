/**
* WITE 2024
* Robótica Educacional
* Desafio : Roedores Ladrões
*/ 
#define AutoFalante 13
#define presenca 27

void setup() {
  pinMode(AutoFalante, OUTPUT);
  pinMode(presenca, INPUT);
  Serial.begin(9600);
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
  } else {
    Serial.println("---");
  }

  //Sirene
  /*
  tone(AutoFalante, 300);
  delay(500);
  noTone(AutoFalante);
  delay(500);
  */
}
