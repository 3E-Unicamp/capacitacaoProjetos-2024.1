int contagem = 0;
int botao = 0;
int contou = 0;  
  #define PINO0 0
  #define PINO1 1
  #define PINO2 2
  #define PINO3 3
  #define PINO4 4
  #define PINO5 5
  #define PINO6 6
  #define PINO7 7
  #define PINO14 14



void setup(){
  pinMode(PINO0, OUTPUT);
  pinMode(PINO1, OUTPUT);
  pinMode(PINO2, OUTPUT);
  pinMode(PINO3, OUTPUT);
  pinMode(PINO4, OUTPUT);
  pinMode(PINO5, OUTPUT);
  pinMode(PINO6, OUTPUT);
  pinMode(PINO7, OUTPUT);
  pinMode(PINO14, INPUT); 
}

void loop()
{
  if (analogRead(PINO14) == 1023) {
    botao = 0;
    contou = 0;
  }
  if (analogRead(PINO14) == 0) {
    botao = 1;
  }
  if (botao != 0) {
    if (contou == 0) {
      contagem = (contagem +1)%10;
      contou = 1;
    }
  }
  if(contagem == 0){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, LOW);
    digitalWrite(PINO2, LOW);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, LOW);
    digitalWrite(PINO5, LOW);
    digitalWrite(PINO6, LOW);
    digitalWrite(PINO7, HIGH);
  }
  if(contagem == 1){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, HIGH);
    digitalWrite(PINO2, LOW);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, HIGH);
    digitalWrite(PINO5, HIGH);
    digitalWrite(PINO6, HIGH);
    digitalWrite(PINO7, HIGH);
  }    
  if(contagem == 2){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, LOW);
    digitalWrite(PINO2, LOW);
    digitalWrite(PINO3, HIGH);
    digitalWrite(PINO4, LOW);
    digitalWrite(PINO5, LOW);
    digitalWrite(PINO6, HIGH);
    digitalWrite(PINO7, LOW);
  }    
  if(contagem == 3){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, LOW);
    digitalWrite(PINO2, LOW);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, LOW);
    digitalWrite(PINO5, HIGH);
    digitalWrite(PINO6, HIGH);
    digitalWrite(PINO7, LOW);
  }    
  if(contagem == 4){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, HIGH);
    digitalWrite(PINO2, LOW);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, HIGH);
    digitalWrite(PINO5, HIGH);
    digitalWrite(PINO6, LOW);
    digitalWrite(PINO7, LOW);
  }    
  if(contagem == 5){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, LOW);
    digitalWrite(PINO2, HIGH);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, LOW);
    digitalWrite(PINO5, HIGH);
    digitalWrite(PINO6, LOW);
    digitalWrite(PINO7, LOW); 
  }    
  if(contagem == 6){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, LOW);
    digitalWrite(PINO2, HIGH);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, LOW);
    digitalWrite(PINO5, LOW);
    digitalWrite(PINO6, LOW);
    digitalWrite(PINO7, LOW);
  }  
  if(contagem == 7){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, LOW);
    digitalWrite(PINO2, LOW);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, HIGH);
    digitalWrite(PINO5, HIGH);
    digitalWrite(PINO6, HIGH);
    digitalWrite(PINO7, HIGH);
  }    
  if(contagem == 8){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, LOW);
    digitalWrite(PINO2, LOW);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, LOW);
    digitalWrite(PINO5, LOW);
    digitalWrite(PINO6, LOW);
    digitalWrite(PINO7, LOW);
  }    
  if(contagem == 9){
    digitalWrite(PINO0, HIGH);
    digitalWrite(PINO1, LOW);
    digitalWrite(PINO2, LOW);
    digitalWrite(PINO3, LOW);
    digitalWrite(PINO4, LOW);
    digitalWrite(PINO5, HIGH);
    digitalWrite(PINO6, LOW);
    digitalWrite(PINO7, LOW);
  }
}
