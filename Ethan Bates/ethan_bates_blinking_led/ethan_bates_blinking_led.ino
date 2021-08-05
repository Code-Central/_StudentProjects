int LED = 0;
int LED2 = 1;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
}


void loop(){
  digitalWrite(LED, HIGH);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(LED, LOW);
  delay(1000);
}
