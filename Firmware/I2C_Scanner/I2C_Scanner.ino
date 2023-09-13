#include <Wire.h>

int pin_SDA = 15;
int pin_SCL = 5;

void setup()
{
  Serial.begin(115200);
  Serial.println("I2C Scanner");

  Wire.begin(pin_SDA, pin_SCL); //SDA, SCL
}

void loop()
{
  Serial.println();
  for (byte address = 0; address < 127; address++ )
  {
    Wire.beginTransmission(address);
    if (Wire.endTransmission() == 0)
    {
      Serial.print("Device found at address 0x");
      if (address < 0x10)
        Serial.print("0");
      Serial.println(address, HEX);
    }
  }
  Serial.println("Done");
  delay(100);
}
