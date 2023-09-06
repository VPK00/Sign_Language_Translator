#include <LiquidCrystal.h>
int flex;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;//LCD and arduino interfacing pins.
//to intialise pins on arduino.
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup()//runs only once
{
//functions of pins is defined here
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2); 
}
void loop() //code functionality written inside this.
{
      int flex = analogRead(A0);
  Serial.println(flex);
  delay(5000);//5 SECONDS DELAY
  if(flex>=50)//WHEN FLEX SENSOR IS BENT 
    {
       Serial.println("THANKS");
       lcd.print("THANKS");
       delay(5000);//5 SECONDS DELAY
    }
    else if(flex<50)//WHEN FLEX SENSOR IS STRAIGHT
    {
      Serial.println("GIVE ME WATER");
      lcd.print("GIVE ME WATER");
       delay(5000);//5 SECONDS DELAY
    }   
   
}
