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
// screen resolution for M5stickPlus: 240 x 135

#include <Arduino.h>
#include <M5StickCPlus.h>
#include <M5Display.h>
#include "confused_icon.h"
#include "frown_icon.h"
#include "hmm_icon.h"
#include "smiles_icon.h"

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

#define SERVICE_UUID "4fafc201-1fb5-459e-8fcc-c5c9c331914a"
#define CHARACTERISTIC_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"

float accX = 0.0F;
float accY = 0.0F;
float accZ = 0.0F;

float gyroX = 0.0F;
float gyroY = 0.0F;
float gyroZ = 0.0F;

float pitch = 0.0F;
float roll = 0.0F;
float yaw = 0.0F;

void displayInstruction();
void resetScreen();
void notifyClient(String myText);
int currVal, prevVal;

BLECharacteristic *pCharacteristic;

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

  Serial.begin(115200);
  Serial.println("Starting BLE work!");

  BLEDevice::init("IMU Sensor BLE Device");

  // Create Server
  BLEServer *pServer = BLEDevice::createServer();

  // Create Service
  BLEService *pService = pServer->createService(SERVICE_UUID);

  pCharacteristic = pService->createCharacteristic(
      CHARACTERISTIC_UUID,
      BLECharacteristic::PROPERTY_READ |
          BLECharacteristic::PROPERTY_WRITE);

  pCharacteristic->setValue("Hello World says IMU Sensor");
  pService->start();
  // BLEAdvertising *pAdvertising = pServer->getAdvertising();  // this still is working for backward compatibility
  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();
  pAdvertising->addServiceUUID(SERVICE_UUID);
  pAdvertising->setScanResponse(true);
  pAdvertising->setMinPreferred(0x06); // functions that help with iPhone connections issue
  pAdvertising->setMinPreferred(0x12);
  BLEDevice::startAdvertising();
  Serial.println("Characteristic defined!");
}

void loop()
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

  // M5.Lcd.setTextSize(1);
  // M5.Lcd.setCursor(30, 25);
  // M5.Lcd.printf(" %5.2f   %5.2f   %5.2f   ", pitch, roll, yaw);

  // if (pitch > -30 && pitch < 30 && roll > -30 && roll < 30)
  // {
  // displayResult("1");
  // }
  if (pitch < -60 && pitch > -120 && roll > 60 && roll < 120)
  {
    // displayResult("2");
    currVal = 2;
    if (currVal != prevVal)
    {
      M5.Lcd.fillScreen(BLACK);
      M5.Lcd.setRotation(1); // set screen orientation
      M5.Lcd.drawBitmap(56, 3, logoWidth, logoHeight, (uint16_t *)frown_icon);
      notifyClient("frown");
      resetScreen();
    }
  }
  else if (pitch > 60 && pitch < 120 && roll > -120 && roll < -50)
  {
    // displayResult("3");
    currVal = 3;
    if (currVal != prevVal)
    {
      M5.Lcd.fillScreen(BLACK);
      M5.Lcd.setRotation(3); // set screen orientation
      M5.Lcd.drawBitmap(56, 3, logoWidth, logoHeight, (uint16_t *)confused_icon);
      notifyClient("confused");
      resetScreen();
    }
  }
  else if (pitch > -30 && pitch < 30 && roll > -120 && roll < -60)
  {
    // displayResult("4");
    currVal = 4;
    if (currVal != prevVal)
    {
      M5.Lcd.fillScreen(BLACK);
      M5.Lcd.setRotation(2); // set screen orientation
      M5.Lcd.drawBitmap(3, 56, logoWidth, logoHeight, (uint16_t *)hmm_icon);
      notifyClient("hmm");
      resetScreen();
    }
  }
  else if (pitch > -30 && pitch < 30 && roll > 60 && roll < 120)
  {
    // displayResult("5");
    currVal = 5;
    if (currVal != prevVal)
    {
      M5.Lcd.fillScreen(BLACK);
      M5.Lcd.setRotation(4); // set screen orientation
      M5.Lcd.drawBitmap(3, 56, logoWidth, logoHeight, (uint16_t *)smiles_icon);
      notifyClient("smile");
      resetScreen();
    }
  }
  // else if (pitch > -30 && pitch < 30 && (roll > 150 || roll < -150))
  // {
  //   displayResult("6");
  // }
  else
    displayInstruction();

  std::string value;
  value = pCharacteristic->getValue();
  printf("\nThe characteristic is: %s", value);

  delay(30); // determines the responsiveness, tradeoff with dither, 30ms is sweet spot
}

void resetScreen()
{
  delay(1000);
  M5.Lcd.fillScreen(BLACK);
  displayInstruction();
  prevVal = currVal;
}

void notifyClient(String myText)
{
  pCharacteristic->setValue(myText.c_str());
  Serial.print("Notifying client that the value is: ");
  Serial.println(myText);
  pCharacteristic->notify();
}

void displayInstruction()
{
  if (currVal == 3) // confused
  {
    M5.Lcd.setRotation(3); // set screen orientation
    M5.Lcd.drawCentreString("Rotate the device", 120, 62, 4);
  }
  else if (currVal == 2) // frown
  {
    M5.Lcd.setRotation(1);
    M5.Lcd.drawCentreString("Rotate the device", 120, 62, 4);
  }
  else if (currVal == 4) // hmm
  {
    M5.Lcd.setRotation(2);
    M5.Lcd.drawCentreString("Rotate", 62, 110, 4);
    M5.Lcd.drawCentreString("the device", 62, 130, 4);
  }
  else if (currVal == 5) // smile
  {
    M5.Lcd.setRotation(4);
    M5.Lcd.drawCentreString("Rotate", 62, 110, 4);
    M5.Lcd.drawCentreString("the device", 62, 130, 4);
  }
}
