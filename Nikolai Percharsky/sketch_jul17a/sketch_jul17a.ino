#include <LiquidCrystal.h>
#include "DHT.h"
#define DHTPIN 8
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
 dht.begin();
 lcd.begin(16, 2);
}
void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  t = t * 9 / 5 + 32;
  if (isnan(t) || isnan(h)){
    lcd.setCursor(0, 0);
    lcd.print("failed to read from DHT");
     
}else{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("temp: ");
  lcd.print(t);
  lcd.print("f");
  }
}
