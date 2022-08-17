
void setup() {
  // put your setup code here, to run once:
  for(int i = 1; i < 5; i++)
  {
    pinMode(i , OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 2; i <= 4; i++)
  {
    digitalWrite(i, 1);
    delay(500);
    digitalWrite(i, 0);
    if(i == 4)
    {
      for(int i = 3; i > 2; i--)
      {
        digitalWrite(i, 1);
        delay(500);
        digitalWrite(i, 0);
      }
    }
  }
}
