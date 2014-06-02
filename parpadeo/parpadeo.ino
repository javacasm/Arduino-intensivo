int led = 9;
void setup() {                
  pinMode(led, OUTPUT);     
  Serial.begin(9600);
}
int pausa=1000;

void loop() {
  digitalWrite(led, HIGH); 
  delay(pausa);
  digitalWrite(led, LOW);
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
