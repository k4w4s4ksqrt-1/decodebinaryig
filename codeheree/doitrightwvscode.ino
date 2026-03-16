int potPosition; 
void setup()
{
  Serial.begin(9600);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop()
{
  potPosition = analogRead(A0);
}