int led = 0;
int g00se = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(g00se, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  digitalWrite(g00se, LOW);
  delay(1000);
  
  digitalWrite(led, LOW);
  digitalWrite(g00se, HIGH);
  delay(1000);
  
}
