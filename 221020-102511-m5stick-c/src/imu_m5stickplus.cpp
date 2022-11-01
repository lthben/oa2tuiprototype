/*
*******************************************************************************
* Copyright (c) 2021 by M5Stack
*                  Equipped with M5StickC-Plus sample source code
*                          配套  M5StickC-Plus 示例源代码
* Visit for more information: https://docs.m5stack.com/en/core/m5stickc_plus
* 获取更多资料请访问: https://docs.m5stack.com/zh_CN/core/m5stickc_plus
*
* Describe: IMU.
* Date: 2021/9/14
*******************************************************************************
*/
#include <Arduino.h>
#include <M5StickCPlus.h>

float accX = 0.0F;
float accY = 0.0F;
float accZ = 0.0F;

float gyroX = 0.0F;
float gyroY = 0.0F;
float gyroZ = 0.0F;

float pitch = 0.0F;
float roll = 0.0F;
float yaw = 0.0F;

void displayResult(String myText);

void setup()
{
  M5.begin();
  M5.Imu.Init();

  M5.Lcd.setRotation(1); // set screen orientation

  M5.Lcd.fillScreen(BLACK);
  //    M5.Lcd.setCursor(80, 15);
  //    M5.Lcd.println("IMU TEST");
  //    M5.Lcd.setCursor(30, 30);
  //    M5.Lcd.println("  X       Y       Z");
  //    M5.Lcd.setCursor(30, 70);
  //    M5.Lcd.println("  Pitch   Roll    Yaw");
}

void loop()
// screen resolution for M5stickPlus: 240 x 135
{
  static float temp = 0;
  // M5.IMU.getGyroData(&gyroX, &gyroY, &gyroZ);
  // M5.IMU.getAccelData(&accX, &accY, &accZ);
  M5.IMU.getAhrsData(&pitch, &roll, &yaw);
  // M5.IMU.getTempData(&temp);

  //  M5.Lcd.setCursor(30, 40);
  //  M5.Lcd.printf("%6.2f  %6.2f  %6.2f      ", gyroX, gyroY, gyroZ);
  //  M5.Lcd.setCursor(170, 40);
  //  M5.Lcd.print("o/s");
  //  M5.Lcd.setCursor(30, 50);
  //  M5.Lcd.printf(" %5.2f   %5.2f   %5.2f   ", accX, accY, accZ);
  //  M5.Lcd.setCursor(170, 50);
  //  M5.Lcd.print("G");
  //    M5.Lcd.setCursor(30, 95);
  //    M5.Lcd.printf("Temperature : %.2f C", temp);

  M5.Lcd.setTextSize(1);
  M5.Lcd.setCursor(30, 25);
  M5.Lcd.printf(" %5.2f   %5.2f   %5.2f   ", pitch, roll, yaw);

  if (pitch > -30 && pitch < 30 && roll > -30 && roll < 30)
    displayResult("1");

  else if (pitch < -60 && pitch > -120 && roll > 60 && roll < 120)
    displayResult("2");

  else if (pitch > 60 && pitch < 120 && roll > -120 && roll < -50)
    displayResult("3");

  else if (pitch > -30 && pitch < 30 && roll > -120 && roll < -60)
    displayResult("4");

  else if (pitch > -30 && pitch < 30 && roll > 60 && roll < 120)
    displayResult("5");

  else if (pitch > -30 && pitch < 30 && (roll > 150 || roll < -150))
    displayResult("6");

  else
    displayResult("");

  delay(20); // determines the responsiveness, 20ms is sweet spot
}

void displayResult(String myText)
{
  M5.Lcd.drawString(myText, 120, 62, 4);
}
