int button = 3;
int led = 10;

bool on = false;
bool buttonPressed = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == HIGH) {
   if (buttonPressed == false){
    on = !on;
    buttonPressed = true;
  digitalWrite(led, HIGH);
  }
 }
 else {
  buttonPressed = false;
 }
  if (on == true) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}
