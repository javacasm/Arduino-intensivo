void setup()
{ Serial.begin(9600);}

void loop()
{
  int value=analogRead(A0);
  float voltio=value*5.0/1023.0;

  Serial.print(value);
  Serial.print(" -> ");
  Serial.print(voltio);
  Serial.println("v");
}
