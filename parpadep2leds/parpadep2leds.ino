int led = 9;
int led13=13;
void setup() {                
  pinMode(led, OUTPUT);     pinMode(led13,OUTPUT);
  Serial.begin(9600);
}
int pausa=1000;
void loop() {
  digitalWrite(led, HIGH); digitalWrite(led13,LOW);
  delay(pausa);
  digitalWrite(led, LOW);digitalWrite(led13,HIGH);
  delay(pausa);
  
  if(pausa<=0)    
  {
    pausa=1000;
  }
  else
  {
    pausa=pausa-100;
  }
  Serial.print("pausa=");
  Serial.println(pausa);
}
