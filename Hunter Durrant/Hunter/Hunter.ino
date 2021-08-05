int led = 0;
int lek = 1;

void setup() {
  // put your setup code here, to run once:
    pinMode(led, OUTPUT);
    pinMode(lek, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  digitalWrite(lek, LOW);
   delay(100);
  digitalWrite(lek, HIGH);
  digitalWrite(led, LOW);
   delay(100);
}
