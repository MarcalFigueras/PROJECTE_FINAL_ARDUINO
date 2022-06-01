int azul = 10;
int verde = 11;
int rojo = 12;
int amarillo = 13;

char valor;

void setup() {
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    valor=Serial.read();

    if (valor =='A')
    {
      digitalWrite(azul,HIGH);
      digitalWrite(verde,LOW);
      digitalWrite(rojo,LOW);
      digitalWrite(amarillo,LOW);
    }
    
    if (valor =='B')
    {
      digitalWrite(azul,LOW);
      digitalWrite(verde,HIGH);
      digitalWrite(rojo,LOW);
      digitalWrite(amarillo,LOW);
    }

    if (valor =='C')
    {
      digitalWrite(azul,LOW);
      digitalWrite(verde,LOW);
      digitalWrite(rojo,HIGH);
      digitalWrite(amarillo,LOW);
    }

    if (valor =='D')
    {
      digitalWrite(rojo,LOW);
      digitalWrite(verde,LOW);
      digitalWrite(rojo,LOW);
      digitalWrite(amarillo,HIGH);
    }
  }
  delay(100);
}
