int led = 0;

void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  // code, repeat, O R  E L S E-
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
