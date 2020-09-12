#include<OneWire.h>
#include<DallasTemperature.h>
#include<Wire.h>

#include<LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
#define contrast_pin 6

#define ONE_WIRE_BUS 4
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
float C;
float F;

void setup() {
  lcd.begin(16, 2);
  pinMode(contrast_pin, OUTPUT);
  analogWrite(contrast_pin, 110);
  lcd.setCursor(2, 0);
  lcd.print("Temperature:");

  sensors.begin();


}

void loop() {

  sensors.requestTemperatures();
  C = sensors.getTempCByIndex(0);
  F = sensors.toFahrenheit(C);

  lcd.setCursor(0, 1);
  lcd.print(C);
  lcd.print(char(223));
  lcd.print("C ");

  lcd.print(F);
  lcd.print(char(223));
  lcd.print("F  ");

  delay(500);


}
