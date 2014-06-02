int ledTermostato=13,ledTemperatura=9;
void setup()
{
  Serial.begin(9600);
  pinMode(ledTermostato,OUTPUT);
}

void loop()
{ int value=analogRead(A1);
  float temp=5.0*value*100.0/1024;

  
  int potValue=analogRead(A0);
  int tempObjetivo=map(potValue,0,1023,15,35);
  Serial.print(tempObjetivo);
  Serial.print(" - ");
  Serial.println(temp);  
  int nivelLed=map(int(temp),0,40,0,100);
  analogWrite(ledTemperatura,nivelLed);
  if(temp>tempObjetivo)
  {  digitalWrite(ledTermostato,HIGH);
     Serial.println("Termostato on");   }
  else
  {    digitalWrite(ledTermostato,LOW);  }
}
