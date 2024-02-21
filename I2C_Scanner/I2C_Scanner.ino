#include <Wire.h>

// Defines the range of I2C addresses to scan.
const int START_ADDRESS = 0x03;
const int END_ADDRESS = 0x77;

void setup() {
  Wire.begin(); // Initializes the I2C bus
  Serial.begin(9600); // Starts serial communication
  while (!Serial); // Waits for the serial port to connect. Needed for native USB port only

  Serial.println("\nI2C Scanner Running");

  byte error, address;
  int nDevices = 0;

  Serial.println("Scanning...");

  for(address = START_ADDRESS; address <= END_ADDRESS; address++ ) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("I2C device found at address 0x");
      if (address < 16) Serial.print("0");
      Serial.print(address, HEX);
      Serial.println(" !");
      
      nDevices++;
    }
    else if (error == 4) {
      Serial.print("Unknown error at address 0x");
      if (address < 16) Serial.print("0");
      Serial.println(address, HEX);
    }    
  }
  if (nDevices == 0) {
    Serial.println("No I2C devices found.");
  }
  else {
    Serial.println("Scan completed.");
  }
}

void loop() {
  // Nothing to do here
}
