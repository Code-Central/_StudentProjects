int led = 0;
int led2 = 1;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  delay(1000);
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
}
