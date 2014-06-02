void setup()
{ Serial.begin(9600);}
int led=9;
void loop()
{
  int value=analogRead(A0);
  float voltio=value*5.0/1023.0;

  Serial.print(value);
  Serial.print(" -> ");
  Serial.print(voltio);
  Serial.println("v");
  
  analogWrite(led,value/10);
  delay(100);
}
