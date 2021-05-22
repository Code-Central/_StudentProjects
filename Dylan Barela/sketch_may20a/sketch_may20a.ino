#include <LiquidCrystal.h>
 LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // Set up the LCD's number of columns and rows
 lcd.begin(16, 2);
 lcd.print("THE WORLD!!!!!");
 delay(1000);


}

void loop() {
 // Delay at the end of the full loop
 delay(1000);
}
