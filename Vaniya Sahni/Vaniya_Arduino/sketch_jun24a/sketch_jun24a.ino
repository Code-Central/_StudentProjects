#include <Password.h>
#include <Keypad.h>
#include <Servo.h>

Servo myservo;
Password password = Password("2468");

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'}, 
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {9,8,7,6};

byte colPins[COLS] = {5,4,3,2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup() {
  Serial.begin(9600);
  delay(200);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  myservo.attach(13);
  keypad.addEventListener(keypadEvent);

}

void loop() {
  keypad.getKey();
//  myservo.write(0);
}

void keypadEvent(KeypadEvent eKey) {
  switch (keypad.getState()) {
    case PRESSED:
    Serial.print("Pressed: ");
    Serial.println(eKey);
    switch (eKey) {
      case '*': checkPassword(); break;
      case '#': password.reset(); break;
      default: password.append(eKey);
    }
  }
}

void checkPassword() {
  if (password.evaluate() ){
    Serial.println("Success");
    myservo.write(850);
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
  } else {
    Serial.println("Wrong");
    myservo.write(0);
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
  }
}
