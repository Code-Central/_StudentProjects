int ledB = 0;
int ledR = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledB, OUTPUT);
  pinMode(ledR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledB, HIGH);
  digitalWrite(ledR, LOW);
  delay(1000);

  digitalWrite(ledR, HIGH);
  digitalWrite(ledB, LOW);
  delay(1000);
}
