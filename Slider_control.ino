#include <Wire.h>

void setup() {

  Wire.begin(); // join i2c bus (address optional for master)

  Serial.begin(115200); // start serial communication at 9600bps
  // move the slicer to the middle
  Wire.beginTransmission(0xE7); // transmit to device (0xE7)
  Wire.write(15);               // register to conrol location
  Wire.write(129);              // go to the middle
  Wire.endTransmission();       // stop transmitting
}

void loop() {
  // now you can move the slider manualy and read where it is
  Wire.beginTransmission(0xE7); // transmit to device 0xE7
  Wire.write(17);               // sets register to report location when asked
  Wire.endTransmission();       // stop transmitting

  Wire.requestFrom(0xE7, 1); // request one bit of data
  if (Wire.available()) {
    int readpositions = Wire.read(); // read the position and print
    Serial.println(readpositions);
  }
  delay(500);
}
