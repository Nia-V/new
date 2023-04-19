#include <Wire.h>
#include <Arduino.h>

void digitalWrite(int pin, bool value) {
  if (pin > 19) {
    Wire.beginTransmission(9);  // informs the bus that we will be sending data to slave device 8 (0x08)
    Wire.write(pin);      // send value_pot
    Wire.endTransmission();
  }
}