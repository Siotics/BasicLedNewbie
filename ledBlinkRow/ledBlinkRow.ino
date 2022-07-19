const int led1 = 1;
const int led2 = 2;
const int led3 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
}
