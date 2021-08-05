int button = 11;
bool cars = false;
bool isClicked = false;
int pedGreen = 7;
int pedRed = 6;
int carGreen = 4;
int carYellow = 3;
int carRed = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == HIGH && isClicked == false) {
    cars = !cars;
    isClicked = true;
    
    if (cars == true) {
      Serial.println("Cars can go");
      digitalWrite(carGreen, HIGH);
      digitalWrite(pedGreen, LOW);
      digitalWrite(carRed, LOW);
      digitalWrite(pedRed, HIGH);
    }
    else {
      Serial.println("Pedestrains can go");
      digitalWrite(carGreen, LOW);
      digitalWrite(carYellow, HIGH);
      delay(500);

      digitalWrite(carYellow, LOW);
      digitalWrite(carRed, HIGH);
      delay(500);

      Serial.println("Pedestraubs cab go");
      digitalWrite(pedGreen, HIGH);
      digitalWrite(pedRed, LOW);
    }
  }
    if(digitalRead(button) == LOW) {
      isClicked = false;    
    }
}
