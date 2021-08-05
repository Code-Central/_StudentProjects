int led = 0;
int blueled = 2;
int yelled = 3;
int yellowled2 = 4;
int whiteled = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(yelled, OUTPUT);
  pinMode(yellowled2, OUTPUT);
  pinMode(whiteled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(whiteled, HIGH);
  digitalWrite(blueled, HIGH);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  digitalWrite(blueled, LOW);
  delay(500);
  digitalWrite(yelled, HIGH);
  digitalWrite(yellowled2, LOW);
  delay(500);
  digitalWrite(yellowled2, HIGH);
  digitalWrite(yelled, LOW);
}
