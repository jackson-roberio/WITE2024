 //Desafio 08 - Alguém no Portão
 
#define AutoFalante 26
#define Presenca 13
#define Led 14

int Visitantes = 0; 

void setup() {
  pinMode(AutoFalante, OUTPUT);
  pinMode(Led, OUTPUT);
  pinMode(Presenca, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool valorSensor = digitalRead(Presenca);
  
  if (valorSensor){
    Serial.println("DETECTADO");

    Visitantes = Visitantes + 1;

    Serial.println(Visitantes);

    //A contagem de visitantes é registrada por piscagem nos led's
    for (int i = 0; i <= Visitantes; i++){
      digitalWrite(Led, HIGH);
      tone(AutoFalante, 300);
      delay(500);
      digitalWrite(Led, LOW);
      noTone(AutoFalante);
      delay(500);
    }
    
  } 
}