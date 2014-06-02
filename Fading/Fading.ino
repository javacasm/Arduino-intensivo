int ledPin = 9;    
void setup()  { 
Serial.begin(9600); } 

void loop()  { 
  int maxValue=150;
  for(int fadeValue = 0 ; fadeValue <= maxValue; fadeValue =fadeValue+5) 
  {  Serial.println(fadeValue);
    analogWrite(ledPin, fadeValue);         
    delay(30);                            
  } 
  for(int fadeValue = maxValue ; fadeValue >= 0; fadeValue -=5) 
  { Serial.println(fadeValue);
    analogWrite(ledPin, fadeValue);         
    delay(30);                            
  } 
}


