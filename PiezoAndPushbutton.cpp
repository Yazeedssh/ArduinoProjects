int GreenLed= 7;
int piezoPin = 8;
int button = 2;
int value;
void setup()
{
  pinMode(GreenLed, OUTPUT);
  pinMode(piezoPin, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{ 
  value=digitalRead(button);
    
  if(value==HIGH)
  {
    tone(piezoPin, 500);
    digitalWrite(GreenLed, LOW);
    
  }
  else
  {
    noTone(piezoPin);
    digitalWrite(GreenLed,HIGH);
  }
    
}
