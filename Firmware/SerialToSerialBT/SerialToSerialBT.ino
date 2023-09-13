//This example code is in the Public Domain (or CC0 licensed, at your option.)
//By Evandro Copercini - 2018
//
//This example creates a bridge between Serial and Classical Bluetooth (SPP)
//and also demonstrate that SerialBT have the same functionalities of a normal Serial

#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

#include "esp_bt_device.h"

char macAddress[strlen("E8:9F:6D:22:37:72")] = {0};

void setup() {
  Serial.begin(115200);
  delay(250); //Wait for serial port to open

  SerialBT.begin("SparkFun"); //Bluetooth device name

  Serial.println("The device has started. Now you can pair it with Bluetooth!");

  const uint8_t* mAdr = esp_bt_dev_get_address();

  for (int i = 0 ; i < 6 ; i++)
  {
    char str[3];
    sprintf(str, "%02X", (int)mAdr[i]);
    strcat(macAddress, str);

    if (i < 5)
      strcat(macAddress, ":");
  }

  Serial.printf("Bluetooth MAC: %s\r\n", macAddress);
}

void loop()
{
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }

  char myString[500];
  sprintf(myString, "Hello %s how are you today? Is it going well? How is the weather? Let's talk again soon!", macAddress);
  SerialBT.println(myString);
  delay(100);
}
