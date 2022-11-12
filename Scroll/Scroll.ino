
#include "LiquidCrystal.h"
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
float temp;  // to include LM 35 sensor
void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL);
  lcd.begin(16, 2);  // the codes written here is to run the programme once
  lcd.setCursor(0, 0);
  // lcd.print(" MADE BY   ");
  // lcd.setCursor(0, 1);
  // delay(400);
  // lcd.print(" Its Opurbo  ");
  // delay(700);
  // lcd.clear();  //Let system settle
}
void loop() {
  temp = analogRead(A0);  //temp = temp * 0.48828125;  //temp=temp*(5.0/1023.0)*100;
  temp = temp * 1100 / (1024 * 10);
  lcd.print("TEMP: ");
  lcd.print(temp);
  lcd.println("*C");
  delay(500);
  lcd.clear();  //Let system settle
}