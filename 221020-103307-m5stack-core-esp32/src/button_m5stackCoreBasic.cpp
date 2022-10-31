/******************************************************************************
  Copyright (c) 2022 by M5Stack
                   Equipped with M5Core sample source code
  Visit for more information: https://docs.m5stack.com/en/core/gray
  Describe: Button.
  Date: 2021/8/9
*******************************************************************************/

#include <Arduino.h>
#include <M5Stack.h>

int last_values[4] = {0, 0, 0, 0};
int curr_values[4] = {0, 0, 0, 0};

//NOTE: the opposite facing pins on the M5Stack are actually mirroring the same pins, so there are actually only 2 rows of pins
#define PIN1 17 
#define PIN2 21
#define PIN3 22
#define PIN4 36

void setup() {
  M5.begin();
  M5.Power.begin();
  pinMode(PIN1, INPUT);
  pinMode(PIN2, INPUT);
  pinMode(PIN3, INPUT);
  pinMode(PIN4, INPUT);
  M5.Lcd.setTextColor(
    YELLOW);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(
    80, 0);  
  M5.Lcd.println("Button test");
  M5.Lcd.setTextColor(WHITE);
}

void loop() {

M5.update();
M5.Lcd.setCursor(80, 25);
  M5.Lcd.print("Button");
  M5.Lcd.setCursor(0, 45);
  M5.Lcd.print("Value: ");
  M5.Lcd.setCursor(0, 85);
  M5.Lcd.print("State: ");

  //to test bluetooth functionality
  if (M5.BtnA.wasReleased()) {
    curr_values[0] = 1;
  } else if (M5.BtnB.wasReleased()) {
    curr_values[1] = 1;
  } else if (M5.BtnC.wasReleased()) {
    curr_values[2] = 1;
  }

   for (int i = 0; i < 4; i++) {
    if (curr_values[i] != last_values[i]) {
      M5.Lcd.fillRect(85, 45, 125, 85,
                      BLACK);
      if (curr_values[i] == 1) {
        M5.Lcd.setCursor(95, 45);
        M5.Lcd.print(i+1);  
        M5.Lcd.setCursor(95, 85);
        M5.Lcd.print("pressed");
        delay(1000);
        curr_values[i] = 0;
    
        M5.Lcd.setCursor(95, 45);
        M5.Lcd.print("nil");  
        M5.Lcd.setCursor(95, 85);
        M5.Lcd.print("released");
      }
      last_values[i] = curr_values[i];
    }
  }

  
  
   curr_values[0] = digitalRead(PIN1);    curr_values[1] = digitalRead(PIN2);    curr_values[2] = digitalRead(PIN3);    curr_values[3] = digitalRead(PIN4);
  M5.Lcd.setCursor(80, 25);
  M5.Lcd.print("Button");
  M5.Lcd.setCursor(0, 45);
  M5.Lcd.print("Value: ");
  M5.Lcd.setCursor(0, 85);
  M5.Lcd.print("State: ");
  for (int i = 0; i < 4; i++) {
    if (curr_values[i] != last_values[i]) {
      M5.Lcd.fillRect(85, 45, 125, 85,
                      BLACK);
      if (curr_values[i] == 0) {
        M5.Lcd.setCursor(95, 45);
        M5.Lcd.print(i+1);  
        M5.Lcd.setCursor(95, 85);
        M5.Lcd.print("pressed");
      } else {
        M5.Lcd.setCursor(95, 45);
        M5.Lcd.print("nil");  
        M5.Lcd.setCursor(95, 85);
        M5.Lcd.print("released");
      }
      last_values[i] = curr_values[i];
    }
  }
  
}
