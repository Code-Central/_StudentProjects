int redPin = 5;
int greenPin = 4;
int bluePin = 3;

void setup() {
  // put your setup code here, to run once:
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  changeColor('r');
  delay(500);
  changeColor('g');
  delay(500);
  changeColor('b');
  delay(500);
  changeColor('c');
  delay(500);
  changeColor('y');
  delay(500);
  changeColor('m');
  delay(500);
}

void changeColor(char color) {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);

  if (color == 'r') {
    digitalWrite(redPin, HIGH);
  }
}
