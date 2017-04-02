const int ledpin=13;
const int sensorpin=A0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  int rate = analogRead(sensorpin);
  Serial.println(rate);
  
  if(rate>300)
  {
    digitalWrite(ledpin, HIGH);
  }
  else
  {

    digitalWrite(ledpin, HIGH);
    delay(50);               
    digitalWrite(ledpin, LOW);    
    delay(50);
  }
}
