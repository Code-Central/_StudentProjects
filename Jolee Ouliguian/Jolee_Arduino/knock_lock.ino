 
#include <Servo.h>
Servo tilt , pan;
int joyx = A0;
int joyY = A1;


void setup() {
tilt.attach(9);
pan.attach(10)
}
void loop(){
  x = joyX;
  y = joyY;
  x= map(analogRead(joyX), 0, 1023, 900, 2100);


  y = map(analogyRead(joyX), 0, 1023, 900, 2100);
  tilt.write(x);
  pan.write(y)
  delay(15);
}
