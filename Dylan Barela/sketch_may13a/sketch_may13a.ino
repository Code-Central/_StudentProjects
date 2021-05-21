#include <LiquidCrystal.h>

LiquidCrystal lcd (7, 6, 9, 1, 0, 4);
void setup() {
  lcd.begin(16, 2);

  lcd.print("Arduino Sketch");
  delay(1000);
}

void loop() {


  for (int positionCounter = 0; positionCounter < 13;
 positionCounter++){

  lcd.scrollDisplayLeft();

 delay(150);

 for (int positionCounter = 0; positionCounter < 16;
  positionCounter++){

    lcd.scrollDisplayLeft();
    delay(150);
  }
  delay(1000);
 }

}
