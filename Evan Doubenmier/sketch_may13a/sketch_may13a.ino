#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11,  5, 4, 3, 2); //Pins attached to LCD screen

const int switchPin = 6; // Pin attached to tilt switch
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT); // Set tilt switch pin as input
lcd.print("FORTUNE TELLER"); // Print this on line 1
lcd.setCursor(0, 1);
lcd.print("Ask a question"); // Print this on line 2
}

void loop(){
  switchState = digitalRead(switchPin); // Read tilt switch pin
  if(switchState != prevSwitchState){
    if (switch == LOW){ //If circuit is broken, give answer
      reply = Random(8); // Reply is 1 of 8 random cases as below
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The answer is: ") // Print this to the screen
      lcd.setCursor(0, 1);
      switch (reply) { // Reply will be one of the following cases
        case 0:
        lcd.print("Yes");
        break;

        case 1:
        lcd.print("Probably");
        break;

        case 3:
        lcd.print("Definitly");
        break;

        case 3:
        lcd.print("Don't be silly"); break;

        case 4: 
        lcd.print("Of course");
        break;
         
        case 5:
        lcd.print("Ask again");
        break;

        case 6:
        lcd.print("Doubtful");
        break;

        case 7:
        lcd.print("No");
        break;
      }
    }
  }
 prevSwitchState = switchState; // Reset the switch
}
