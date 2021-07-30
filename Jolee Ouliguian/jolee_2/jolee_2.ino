int pinLeds1 = 10;

int pinLeds2 = 9;

int pinLeds3 = 7;

int pinLed4 = 8;

int buttonpin = 6;

int buttonState;

long ran;

int time = 2000;



void setup(){

pinMode(pinLeds1, OUTPUT);

pinMode(pinLeds2, OUTPUT);

pinMode(pinLeds3, OUTPUT);

pinMode(pinLed4, OUTPUT);

PinMode(buttonPin, INPUT);

randomSeed(analogRead(0));

}

void loop(){

buttonState = digitalRead(buttonPin);



if (buttonState == HIGH){

ran = random(1,
}


}
