int led = 0;
int LED = 1;


void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  
  
}
