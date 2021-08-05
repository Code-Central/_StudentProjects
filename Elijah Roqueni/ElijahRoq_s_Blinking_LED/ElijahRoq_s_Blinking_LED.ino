int led = 0;
int Ied = 1;

void setup() {
  // put your setup code here, to run nce:
  pinMode(led, OUTPUT);
  pinMode(Ied, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  digitalWrite(Ied, LOW);
   delay(1000);
  digitalWrite(Ied, HIGH);
  digitalWrite(led, LOW);
  delay(1000);
}
