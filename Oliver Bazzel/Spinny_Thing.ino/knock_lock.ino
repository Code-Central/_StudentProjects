#include <Servo.h>
Servo servo9;

const int piezo = A0;
const int switchPin = 2;
const int yellowLed = 3;
const int greenLed = 4;
const int redLed = 5;

int knockVal;
int switchVal;

const int quietKnock = 10;
const int loudKnock = 100;
boolean locked = false;
int nnumberOfKnocks = 0;
void setup(){
  servo9.attach(9);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
  digitalWrite(greenLed, HIGH);

  servo9.write(0);
  Serial.println("the box is unlocked!");
}
void loop() {
if (locked == false){
  switchVal = digitalRead(switchPin);
  if (switchVal == HIGH)
  locked  = true;
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
  servo9.write(90);
  Serial.println("the box is locked!");
  delay(1000);
}
}
if (locked == true) {
  knockVal = analogRead(piezo);
  if (number of knocks <3 && knockVal > 0) {
    if (checkForKnock(knockVal) == true) {
      if (numberOfKnocks >= 3) {
        locked = false;
        servo9.write(0);
        delay(20);
        digitalWrite(greenLed, HIGH);
        digitalWrite(redLed, LOW);
        Serial.println("the box is unlocked");
      }
    }
  }
}
boolean checkForKnock(int value){
  if(value > quietKnock && value < loudKnock{

  digitalWrite(yellowLed, Low);
  Serial.print("Valid knock of value");
  Serial.println(value);
  return true;
}
else{
  Serial
}
}
