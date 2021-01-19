#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  // put your setup code here, to run once:
lcd.begin(20,4);
Serial.begin(9600);
lcd.setCursor(0,0);
lcd.print("PENDETEKSI API ");
lcd.setCursor(0,1);
lcd.print("SYAFIQ SURYA R");
lcd.setCursor(0,2);
lcd.print("1903332094");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
int API_VALUE=Serial.read();
if (API_VALUE == LOW){
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("TIDAK ADA API");
  delay(20);
}
else {
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("API TERDETEKSI");
  delay(20);
}
}
