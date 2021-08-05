int led = 0;
int led2 = 1;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop() {
  // code, repeat, O R  E L S E-
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  delay(1000);
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
}
