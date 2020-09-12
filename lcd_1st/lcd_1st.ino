#include<LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);//rs, en, d4, d5, d6, d7

#define contrast_pin 6

void setup() {
  pinMode(contrast_pin, OUTPUT);
  lcd.begin(16, 2);
  analogWrite(contrast_pin, 110);
  lcd.setCursor(0, 0);
  lcd.print("Durbar Kandari");
}

void loop() {

}
