# I2C Scanner

This repository contains an Arduino sketch for scanning and detecting devices connected to the I2C bus. It's a useful tool for debugging and setting up your I2C network, allowing you to quickly find the addresses of your I2C devices.

## Features

- Scans all possible addresses on the I2C bus (from 0x03 to 0x77)
- Prints the addresses of all detected I2C devices to the Serial Monitor
- Indicates when the scan is complete or if no devices were found

## Getting Started

### Prerequisites

- Arduino IDE installed on your computer
- Any Arduino-compatible board (e.g., Uno, Mega, Nano)
- I2C devices connected to your Arduino

### Installation

1. Clone this repository or download the code as a ZIP file and extract it.
2. Open the `I2C_Scanner.ino` file with the Arduino IDE.
3. Connect your Arduino board to your computer via USB.
4. Select your board type and port in the Arduino IDE.
5. Upload the sketch to your board.

### Usage

After uploading, open the Serial Monitor in the Arduino IDE to view the output. The scanner will list the addresses of all found I2C devices. If no devices are found, it will indicate that no I2C devices were detected.