/*!
   @file GestureRecognize_HighRate.ino
   @brief Present the 9 built-in gestures data the sensor supports.
   @n Wave your hand above the sensor (within 0~20cm), it can recognize 9 kinds of gestures: move up, down, left, right, forward,
   @n backward, clockwise, anti-clockwise, wave.
   @n For more usages of the sensor, refer to the description about setGestureHighRate in function setup.

   @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
   @license     The MIT License (MIT)
   @author      [Alexander](ouki.wang@dfrobot.com)
   @maintainer  [fary](feng.yang@dfrobot.com)
   @version  V1.0
   @date  2019-07-16
   @url https://github.com/DFRobot/DFRobot_PAJ7620U2
*/

#include <Arduino.h>
#include <M5StickCPlus.h>
#include <DFRobot_PAJ7620U2.h>
#include "backward-icon.h"
#include "forward-icon.h"
#include "repeat-icon.h"
#include "pause-icon.h"

DFRobot_PAJ7620U2 paj;

void setup()
{
  M5.begin(); // Init M5Core.  初始化 M5Core
  //  M5.Power.begin();  // Init Power module.  初始化电源模块

  Serial.begin(115200);
  // delay(300);

  Serial.println("Gesture recognition system base on PAJ7620U2");
  while (paj.begin() != 0)
  {
    Serial.println("initial PAJ7620U2 failure! Please check if all the connections are fine, or if the wire sequence is correct?");
    delay(500);
  }
  Serial.println("PAJ7620U2 init completed, start to test the gesture recognition function");

  /*Set fast detection mode
    If the parameter is set to false, the module enters slow detection mode, and it detects one gesture every 2s. We have integrated
    some gestures inside the module to make it convenient for beginners.
    The slow mode can recognize 9  basic gestures and 4 expanded gestures: move left, right, up, down, forward, backward, clockwise,
    counter-clockwise, wave, slowly move left and right, slowly move up and down, slowly move forward and backward,
    wave slowly and randomly.

    If the parameter is set to true, the module enters fast detection mode.
    The fast mode can recognize 9 gestures: move left, right, up, down, forward, backward, clockwise, counter-clockwise, wave
    To detect the combination of these gestures, like wave left, right and left quickly, users needs to design their own algorithms logic.
    Since users only use limited gestures in this mode, we are not going to integrate too much expanded gestures in the library.
    If necessary, you can complete the algorithm logic in the ino file by yourself.
  */

  paj.setGestureHighRate(true);

  M5.Lcd.setRotation(1); // Rotate the screen. 将屏幕旋转

  M5.Lcd.drawCentreString("Gesture", 120, 60, 4); // text, centre_x, centre_y, fontsize
}

void loop()
// M5stick lcd resolution: 240x135
{
  M5.update(); // read press state of the buttons

  // if (M5.BtnA.wasReleased()) {
  //   M5.Lcd.fillScreen(BLACK);
  //   M5.Lcd.setCursor(80, 50);
  //   M5.Lcd.print("UP");
  // } else if (M5.BtnB.wasReleased()) {
  //   M5.Lcd.fillScreen(BLACK);
  //   M5.Lcd.setCursor(80, 50);
  //   M5.Lcd.print("DOWN");
  // }

  // Read gesture number（return eGesture_t enumerated type）
  //    eGestureNone  eGestureRight  eGestureLeft  eGestureUp  eGestureDown  eGestureForward
  //    eGestureBackward  eGestureClockwise  eGestureAntiClockwise  eGestureWave  eGestureWaveSlowlyDisorder
  //    eGestureWaveSlowlyLeftRight  eGestureWaveSlowlyUpDown  eGestureWaveSlowlyForwardBackward

  DFRobot_PAJ7620U2::eGesture_t gesture = paj.getGesture();

  //  Get the string descritpion corresponding to the gesture number.
  //    The string description could be
  //    "None","Right","Left", "Up", "Down", "Forward", "Backward", "Clockwise", "Anti-Clockwise", "Wave",
  //    "WaveSlowlyDisorder", "WaveSlowlyLeftRight", "WaveSlowlyUpDown", "WaveSlowlyForwardBackward"

  String description = paj.gestureDescription(gesture); // Convert gesture number into string description

  if (gesture != paj.eGestureNone) // not interested in no gesture and to avoid spamming the output since this is the default value
  {
    Serial.println("--------------Gesture Recognition System---------------------------");
    Serial.print("gesture code        = ");
    Serial.println(gesture);
    Serial.print("gesture description  = ");
    Serial.println(description);
    Serial.println();

    M5.Lcd.fillScreen(BLACK);

    if (gesture == 4)
      // M5.Lcd.drawCentreString("Up", 120, 60, 4);
      M5.Lcd.drawBitmap(60, 7, 120, 120, (uint16_t *)pause_icon);
    else if (gesture == 8)
      // M5.Lcd.drawCentreString("Down", 120, 60, 4);
      M5.Lcd.drawBitmap(60, 7, 120, 120, (uint16_t *)repeat_icon);
    else if (gesture == 1)
      // M5.Lcd.drawCentreString("Right", 120, 60, 4);
      M5.Lcd.drawBitmap(56, 3, logoWidth, logoHeight, (uint16_t *)forward_icon);
    else if (gesture == 2)
      // M5.Lcd.drawCentreString("Left", 120, 60, 4);
      M5.Lcd.drawBitmap(56, 3, logoWidth, logoHeight, (uint16_t *)backward_icon);
    else if (gesture == 64)
      M5.Lcd.drawCentreString("Clockwise", 120, 60, 4);
    else if (gesture == 128)
      M5.Lcd.drawCentreString("Anti-clockwise", 120, 60, 4);
    else if (gesture == 16)
      M5.Lcd.drawCentreString("Forward", 120, 60, 4);
    else if (gesture == 32)
      M5.Lcd.drawCentreString("Backward", 120, 60, 4);
    else
      // else if (gesture == 3 || gesture == 12 || gesture == 48 || gesture == 256 || gesture == 512)
      M5.Lcd.drawCentreString("Wave", 120, 60, 4);
  }
}
