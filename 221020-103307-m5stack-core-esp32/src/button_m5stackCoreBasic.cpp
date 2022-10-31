/******************************************************************************
  Copyright (c) 2022 by M5Stack
                   Equipped with M5Core sample source code
  Visit for more information: https://docs.m5stack.com/en/core/gray
  Describe: Button.
  Date: 2021/8/9
*******************************************************************************/

#include <Arduino.h>
#include <M5Stack.h>

int curr_values[4] = { 0, 0, 0, 0 };

//NOTE: the opposite facing pins on the M5Stack are actually mirroring the same pins, so there are actually only 2 rows of pins
#define PIN1 21 //red
#define PIN2 22 //white
#define PIN3 35 //blue 
#define PIN4 36 //green

void setup() {
  M5.begin();
  M5.Power.begin();
  pinMode(PIN1, INPUT);
  pinMode(PIN2, INPUT);
  pinMode(PIN3, INPUT);
  pinMode(PIN4, INPUT);
  M5.Lcd.setTextColor(
    WHITE);
  M5.Lcd.drawCentreString("Button test", 160, 100, 4);
  delay(1000);
  M5.Lcd.fillRect(0, 0, 360, 240, //x, y, width, height
    BLACK);
}

void loop() {

  M5.update();

  //Cartesian coordinates, 0,0 is top left
  //Pins are active low, so 0 is pressed, 1 is not pressed
  curr_values[0] = digitalRead(PIN1); curr_values[1] = digitalRead(PIN2);    curr_values[2] = digitalRead(PIN3);    curr_values[3] = digitalRead(PIN4);

  if (curr_values[0] == 0) {
    M5.Lcd.clear();
    M5.Lcd.setTextColor(
      RED);
    M5.Lcd.drawCentreString("I AM COMPLETELY LOST", 160, 100, 4);
    delay(1000);
    M5.Lcd.clear();
  }
  else  if (curr_values[1] == 0) {
    M5.Lcd.clear();
    M5.Lcd.setTextColor(
      WHITE);
    M5.Lcd.drawCentreString("I NEED MORE PRACTICE", 160, 100, 4);
    delay(1000);
    M5.Lcd.clear();
  }
  else if (curr_values[2] == 0) {
    M5.Lcd.clear();
    M5.Lcd.setTextColor(
      BLUE);
    M5.Lcd.drawCentreString("I AM GETTING THERE", 160, 100, 4);
    delay(1000);
    M5.Lcd.clear();
  }
  else if (curr_values[3] == 0) {
    M5.Lcd.clear();
    M5.Lcd.setTextColor(
      GREEN);
    M5.Lcd.drawCentreString("I AM A PRO", 160, 100, 4);
    delay(1000);
    M5.Lcd.clear();
  }

  M5.Lcd.setTextColor(
    WHITE);
  M5.Lcd.drawCentreString("Press a button", 160, 100, 4);

}
