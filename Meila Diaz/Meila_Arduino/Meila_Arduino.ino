#include <DHT.h>

#include <LiquidCrystal.h>
#define DHTPIN 8
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup(){
  dht.begin();
  lcd.begin(16, 2);
 }

void loop(){
 float h = dht.readHumidity();
 float t = dht.readTemperature(true);
 //t = t * 9 / 5 + 32;
 if (isnan(t) || isnan(h)){
  lcd.setCursor(0, 0);
  lcd.print("Failed to read from DHT");
  
 }else {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print("f");
 }
}
