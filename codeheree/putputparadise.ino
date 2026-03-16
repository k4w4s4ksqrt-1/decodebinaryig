int speed; 
void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  
}

void loop()

{
  speed = analogRead(A0);
    digitalWrite(6,HIGH);
  	delay(speed);
    digitalWrite(6, LOW); 
    delay(speed);

 



   }