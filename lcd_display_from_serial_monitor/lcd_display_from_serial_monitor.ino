#include <LiquidCrystal.h>


/* Create an instance of the LCD library. */
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

#define contrast_pin 6

void setup()
{
  /* Initialise the LCD */
  lcd.begin(16, 2);
  pinMode(contrast_pin, OUTPUT);
  analogWrite(contrast_pin, 110);
  Serial.begin(9600);
}

/* Main program loop */
void loop()
{
  /* Output the test message to the LCD */
  
  if (Serial.available())
  {
    String str = Serial.readString();
    lcd.clear();
    lcd.setCursor(0, 0);

    lcd.print(str);
  }

}
