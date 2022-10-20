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

DFRobot_PAJ7620U2 paj;

void setup()
{
  M5.begin();        // Init M5Core.  初始化 M5Core
  //  M5.Power.begin();  // Init Power module.  初始化电源模块

  Serial.begin(115200);
  delay(300);
  Serial.println("Gesture recognition system base on PAJ7620U2");
  while (paj.begin() != 0) {
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

  M5.Lcd.setRotation(1);  // Rotate the screen. 将屏幕旋转
  M5.Lcd.setTextSize(4);

}

void loop()
{
  /* Read gesture number（return eGesture_t enumerated type）
     eGestureNone  eGestureRight  eGestureLeft  eGestureUp  eGestureDown  eGestureForward
     eGestureBackward  eGestureClockwise  eGestureAntiClockwise  eGestureWave  eGestureWaveSlowlyDisorder
     eGestureWaveSlowlyLeftRight  eGestureWaveSlowlyUpDown  eGestureWaveSlowlyForwardBackward
  */
  DFRobot_PAJ7620U2::eGesture_t gesture = paj.getGesture();
  if (gesture != paj.eGestureNone ) {
    /* Get the string descritpion corresponding to the gesture number.
       The string description could be
       "None","Right","Left", "Up", "Down", "Forward", "Backward", "Clockwise", "Anti-Clockwise", "Wave",
       "WaveSlowlyDisorder", "WaveSlowlyLeftRight", "WaveSlowlyUpDown", "WaveSlowlyForwardBackward"
    */
    String description  = paj.gestureDescription(gesture);//Convert gesture number into string description
    //    Serial.println("--------------Gesture Recognition System---------------------------");
    //    Serial.print("gesture code        = "); Serial.println(gesture);
    //    Serial.print("gesture description  = "); Serial.println(description);
    //    Serial.println();

    M5.Lcd.setCursor(100, 50);
    M5.Lcd.fillScreen(BLACK);
    if (gesture == 4) M5.Lcd.print("UP");
    else if (gesture == 8) M5.Lcd.print("DOWN");
    else if (gesture == 1) M5.Lcd.print("RIGHT");
    else if (gesture == 2) M5.Lcd.print("LEFT");


  }
}
