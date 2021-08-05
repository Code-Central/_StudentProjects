int led=0;

void setup() {
  //OUR BOMBING SOFTWARE
  pinMode(led, OUTPUT);
}

void loop() {
  //BOOM!
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
}
