#include <LiquidCrystal.h>


/* Create an instance of the LCD library. */
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

#define contrast_pin 6

void setup()
{
  /* Initialise the LCD */
  lcd.begin(16, 2);
  pinMode(contrast_pin, OUTPUT);
  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("SAKIB HASAN");
  lcd.setCursor(0, 1);
  lcd.print("SAKIB HASAN");
}

void loop()
{

  for (int i = 0; i <= 255; i += 5) {
    analogWrite(contrast_pin, i);
    Serial.println(i);
    delay(100);
  }
  Serial.println("*************************");
  for (int i = 255; i >= 0; i -= 5) {
    analogWrite(contrast_pin, i);
    Serial.println(i);
    delay(100);
  }
  Serial.println("*************************");

}
