#include <LiquidCrystal_I2C.h>
#include <Wire.h>

int LeftButton = 2;
int CenterButton = 4;
int RightButton = 7;
int VoidButton = 8;

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();                      // initialize the lcd 
  lcd.init();
  lcd.backlight();
  pinMode(LeftButton, INPUT_PULLUP);
  pinMode(CenterButton, INPUT_PULLUP);
  pinMode(RightButton, INPUT_PULLUP);
  pinMode(VoidButton, INPUT);
  digitalWrite(VoidButton, LOW);
}
  
  void ClearAll() //
{
  lcd.clear();
}
 void DateLoop()
{
    
}
 void ArduinoBoard()
{

}
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(LeftButton) == HIGH) {
    lcd.setCursor(0,0);
    lcd.print("====Nacisnij====");
    lcd.setCursor(0,1);
    lcd.print("==Aby Rozpoczac=");
  }
  else {
    if (digitalRead(VoidButton) == HIGH) {
      lcd.setCursor(0,0);
      lcd.print("Ustaw.Oswietlenia");
      lcd.setCursor(0,1);
      lcd.print("===Czujnik-OFF===");
      delay(4000);
    if (digitalRead(VoidButton) == LOW) {
      lcd.setCursor(0,0);
      lcd.print("Ustaw.Oswietlenia");
      lcd.setCursor(0,1);
      lcd.print("===Czujnik-ON==");
      ArduinoBoard();
      delay(4000);
    }
    }
  }
}
