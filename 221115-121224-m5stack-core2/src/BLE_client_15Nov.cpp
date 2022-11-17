/**
 * A BLE client example that is rich in capabilities.
 * There is a lot new capabilities implemented.
 * author unknown
 * updated by chegewara
 */

#include <Arduino.h>
#include <M5Core2.h>
#include "BLEDevice.h"
//#include "BLEScan.h"
#include "sad_icon.h"
#include "neutral_icon.h"
#include "happy_icon.h"

// Screen pixels are 320x240, with the upper left corner of the screen as the origin(0, 0)

// The remote service we wish to connect to.
static BLEUUID serviceUUID("4fafc201-1fb5-459e-8fcc-c5c9c331914a"); // last char is "a" for IMU and "b" for gesture
// The characteristic of the remote service we are interested in.
static BLEUUID charUUID("beb5483e-36e1-4688-b7f5-ea07361b26a8");

static boolean doConnect = false;
static boolean connected = false;
static boolean doScan = false;
static BLERemoteCharacteristic *pRemoteCharacteristic;
static BLEAdvertisedDevice *myDevice;

String currVal, prevVal;

static void notifyCallback(
    BLERemoteCharacteristic *pBLERemoteCharacteristic,
    uint8_t *pData,
    size_t length,
    bool isNotify)
{
  Serial.print("Notify callback for characteristic ");
  Serial.print(pBLERemoteCharacteristic->getUUID().toString().c_str());
  Serial.print(" of data length ");
  Serial.println(length);
  Serial.print("data: ");
  Serial.println((char *)pData);
}

class MyClientCallback : public BLEClientCallbacks
{
  void onConnect(BLEClient *pclient)
  {
    Serial.println("Server connected");
  }

  void onDisconnect(BLEClient *pclient)
  {
    connected = false;
    Serial.println("Server disconnected");
  }
};

bool connectToServer()
{
  Serial.print("Forming a connection to ");
  Serial.println(myDevice->getAddress().toString().c_str());

  BLEClient *pClient = BLEDevice::createClient();
  Serial.println(" - Created client");

  pClient->setClientCallbacks(new MyClientCallback());

  // Connect to the remove BLE Server.
  pClient->connect(myDevice); // if you pass BLEAdvertisedDevice instead of address, it will be recognized type of peer device address (public or private)
  Serial.println(" - Connected to server");
  pClient->setMTU(517); // set client to request maximum MTU from server (default is 23 otherwise)

  // Obtain a reference to the service we are after in the remote BLE server.
  BLERemoteService *pRemoteService = pClient->getService(serviceUUID);
  if (pRemoteService == nullptr)
  {
    Serial.print("Failed to find our service UUID: ");
    Serial.println(serviceUUID.toString().c_str());
    pClient->disconnect();
    return false;
  }
  Serial.println(" - Found our service");

  // Obtain a reference to the characteristic in the service of the remote BLE server.
  pRemoteCharacteristic = pRemoteService->getCharacteristic(charUUID);
  if (pRemoteCharacteristic == nullptr)
  {
    Serial.print("Failed to find our characteristic UUID: ");
    Serial.println(charUUID.toString().c_str());
    pClient->disconnect();
    return false;
  }
  Serial.println(" - Found our characteristic");

  // Read the value of the characteristic.
  if (pRemoteCharacteristic->canRead())
  {
    std::string value = pRemoteCharacteristic->readValue();
    currVal = value.c_str();
    Serial.print("The characteristic value was: ");
    Serial.println(value.c_str());
  }

  if (pRemoteCharacteristic->canNotify())
    pRemoteCharacteristic->registerForNotify(notifyCallback);

  connected = true;
  return true;
}
/**
 * Scan for BLE servers and find the first one that advertises the service we are looking for.
 */
class MyAdvertisedDeviceCallbacks : public BLEAdvertisedDeviceCallbacks
{
  /**
   * Called for each advertising BLE server.
   */
  void onResult(BLEAdvertisedDevice advertisedDevice)
  {
    Serial.print("BLE Advertised Device found: ");
    Serial.println(advertisedDevice.toString().c_str());

    // We have found a device, let us now see if it contains the service we are looking for.
    if (advertisedDevice.haveServiceUUID() && advertisedDevice.isAdvertisingService(serviceUUID))
    {
      BLEDevice::getScan()->stop();
      myDevice = new BLEAdvertisedDevice(advertisedDevice);
      doConnect = true;
      doScan = true;

    } // Found our server
  }   // onResult
};    // MyAdvertisedDeviceCallbacks

void displayDashboard(String val)
{
  // M5.Lcd.setTextColor(WHITE);
  // M5.Lcd.drawCentreString(val, 160, 120, 4);

  M5.Lcd.drawBitmap(80, 24, 48, 48, (uint16_t *)happy_icon);
  M5.Lcd.drawBitmap(80, 96, 48, 48, (uint16_t *)neutral_icon);
  M5.Lcd.drawBitmap(80, 168, 48, 48, (uint16_t *)sad_icon);

  if (val == "smile")
  {
    M5.Lcd.drawString("23", 180, 30, 6);
    M5.Lcd.drawString("12", 180, 110, 4);
    M5.Lcd.drawString("5", 180, 180, 2);
  }
  if (val == "hmm")
  {
    M5.Lcd.drawString("13", 180, 40, 4);
    M5.Lcd.drawString("20", 180, 100, 6);
    M5.Lcd.drawString("8", 180, 180, 2);
  }
  if (val == "confused")
  {
    M5.Lcd.drawString("12", 180, 40, 4);
    M5.Lcd.drawString("12", 180, 110, 4);
    M5.Lcd.drawString("16", 180, 180, 4);
  }
  if (val == "frown")
  {
    M5.Lcd.drawString("5", 180, 40, 2);
    M5.Lcd.drawString("12", 180, 110, 4);
    M5.Lcd.drawString("23", 180, 170, 6);
  }
}

void setup()
{
  M5.begin();
  M5.Lcd.setRotation(1);
  M5.Lcd.drawCentreString("BLE Client", 160, 120, 4);
  delay(1000);

  Serial.begin(115200);
  Serial.println("Starting Arduino BLE Client application...");
  BLEDevice::init("");

  // Retrieve a Scanner and set the callback we want to use to be informed when we
  // have detected a new device.  Specify that we want active scanning and start the
  // scan to run for 5 seconds.
  BLEScan *pBLEScan = BLEDevice::getScan();
  pBLEScan->setAdvertisedDeviceCallbacks(new MyAdvertisedDeviceCallbacks());
  pBLEScan->setInterval(1349);
  pBLEScan->setWindow(449);
  pBLEScan->setActiveScan(true);

  // If the flag "doConnect" is true then we have scanned for and found the desired
  // BLE Server with which we wish to connect.  Now we connect to it.  Once we are
  // connected we set the connected flag to be true.
  while (!connected)
  {
    pBLEScan->start(5, false); // this sets doConnect to true if the specific device is found
    if (doConnect == true)
    {
      if (connectToServer()) // this sets connected to true
      {
        Serial.println("We are now connected to the BLE Server.");
      }
      else
      {
        Serial.println("We have failed to connect to the server; there is nothin more we will do.");
      }
      doConnect = false;
    }
  }
} // End of setup.

// This is the Arduino main loop function.
void loop()
{
  // If we are connected to a peer BLE Server, update the characteristic each time we are reached
  // with the current time since boot.
  if (connected)
  {
    //    String newValue = "Time since boot: " + String(millis()/1000);
    //    Serial.println("Setting new characteristic value to \"" + newValue + "\"");

    // Set the characteristic's value to be the array of bytes that is actually a string.
    //    pRemoteCharacteristic->writeValue(newValue.c_str(), newValue.length());

    //        if(pRemoteCharacteristic->canRead()) {
    std::string value = pRemoteCharacteristic->readValue();
    currVal = value.c_str();
    if (currVal != prevVal)
    {
      Serial.print("The characteristic value was: ");
      Serial.println(value.c_str());

      M5.Lcd.clear();
      displayDashboard(currVal);

      prevVal = currVal;
    }
    //    }
  }
  // else if (doScan)
  else
  {
    BLEDevice::getScan()->start(0); // this is just example to start scan after disconnect, most likely there is better way to do it in arduino
    delay(2000);
  }

  delay(100); // Delay a second between loops.
} // End of loop
