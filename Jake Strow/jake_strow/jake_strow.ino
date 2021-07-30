#define NUMREADINGS 25
int senseLimit = 1023;

int probePin = 5;
int val = 0;

int LED1 = 11;
int LED2 = 10;
int LED3 = 9;
int LED4 = 8;
int LED5 = 7;
int LED6 = 6;
int LED7 = 5;
int LED8 = 4;
int LED9 = 3;
int LED10 = 2;
int readings[NUMREADINGS];
int index = 0;
int total = 0;
int average = 0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);

  for (int i = 0; i < NUMREADINGS; i++)
    readings[i] = 0;
}

void loop() {
  val = analogRead(probePin);
  if (val >= 1) {
    val = constrain(val, 1, senseLimit);



    val = map(val, 1, senseLimit, 1, 1023);


    total -= readings[index];
    readings[index] = val;
    total += readings[index];
    index = (index + 1);
    if (index >= NUMREADINGS)
      index = 0;
    average = total / NUMREADINGS;
    if (average > 50) {
      digitalWrite(LED1, HIGH);
    }
    else {
      digitalWrite(LED1, LOW);
    }
    if (average > 150) {
      digitalWrite(LED2, HIGH);
    }
    else {
      digitalWrite(LED2, LOW);
    }
    if (average > 250) {
      digitalWrite(LED3, HIGH);
    }
    else {
      digitalWrite(LED3, LOW);
    }
    if (average > 350) {
      digitalWrite(LED4, HIGH);
    }
    else {
      digitalWrite(LED4, LOW);
    }
    if (average > 450) {
      digitalWrite(LED5, HIGH);
    }
    else {
      digitalWrite(LED5, LOW);
    }
    if (average > 550) {
      digitalWrite(LED6, HIGH);
    }          
    else {
      digitalWrite(LED6, LOW);
    }
    if (average > 650) {
      digitalWrite(LED7, HIGH);
    }
    else {
      digitalWrite(LED7, LOW);
    }
    if (average > 750) {
      digitalWrite(LED8, HIGH);
    }
    else {
      digitalWrite(LED8, LOW);
    }
    if (average > 850) {
      digitalWrite(LED9, HIGH);
    }
    else {
      digitalWrite(LED9, LOW);
    }
    if (average > 950) {
      digitalWrite(LED10, HIGH);
    }
    else {
      digitalWrite(LED10, LOW);
    }
    Serial.println(val);
  }
}
