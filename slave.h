#include <Wire.h>
#include<Arduino.h>
void Req() {
  while (Wire.available()) {  // read all bytes received
    Wire.write(8);
  }
}

void Rec() {
  int pin;
  int value;
  bool bvalue;
  while (Wire.available()) {
    pin = Wire.read();
  }

  while (Wire.available()) {
    if (Wire.read() == 1 || Wire.read() == 1) {
      bvalue = Wire.read();
      switch (pin) {
        case 19:
          digitalWrite(0, bvalue);
          break;
        case 20:
          digitalWrite(1, bvalue);
          break;
        case 21:
          digitalWrite(2, bvalue);
          break;
        case 22:
          digitalWrite(3, bvalue);
          break;
        case 23:
          digitalWrite(4, bvalue);
          break;
        case 24:
          digitalWrite(5, bvalue);
          break;
        case 25:
          digitalWrite(6, bvalue);
          break;
        case 26:
          digitalWrite(7, bvalue);
          break;
        case 27:
          digitalWrite(8, bvalue);
          break;
        case 28:
          digitalWrite(9, bvalue);
          break;
        case 29:
          digitalWrite(10, bvalue);
          break;
        case 30:
          digitalWrite(11, bvalue);
          break;
        case 31:
          digitalWrite(12, bvalue);
          break;
        case 32:
          digitalWrite(13, bvalue);
          break;
        case 33:
          digitalWrite(14, bvalue);
          break;
        case 34:
          digitalWrite(15, bvalue);
          break;
        case 35:
          digitalWrite(16, bvalue);
          break;
        case 36:
          digitalWrite(17, bvalue);
          break;
        case 37:
          digitalWrite(18, bvalue);
          break;
        case 38:
          digitalWrite(19, bvalue);
          break;
        default:

          break;
      }
    } else {
      value = Wire.read();
      switch (pin) {
        case 19:
          digitalWrite(0, value);
          break;
        case 20:
          digitalWrite(1, value);
          break;
        case 21:
          digitalWrite(2, value);
          break;
        case 22:
          digitalWrite(3, value);
          break;
        case 23:
          digitalWrite(4, value);
          break;
        case 24:
          digitalWrite(5, value);
          break;
        case 25:
          digitalWrite(6, value);
          break;
        case 26:
          digitalWrite(7, value);
          break;
        case 27:
          digitalWrite(8, value);
          break;
        case 28:
          digitalWrite(9, value);
          break;
        case 29:
          digitalWrite(10, value);
          break;
        case 30:
          digitalWrite(11, value);
          break;
        case 31:
          digitalWrite(12, value);
          break;
        case 32:
          digitalWrite(13, value);
          break;
        case 33:
          digitalWrite(14, value);
          break;
        case 34:
          digitalWrite(15, value);
          break;
        case 35:
          digitalWrite(16, value);
          break;
        case 36:
          digitalWrite(17, value);
          break;
        case 37:
          digitalWrite(18, value);
          break;
        case 38:
          digitalWrite(19, value);
          break;
        default:

          break;
      }
    }
  }
}

void Init() {
  Wire.begin(9);        // join I2C bus as Slave with address 0x08
  Wire.onReceive(Rec);  // register an event handler for received data
  Wire.onRequest(Req);
}
