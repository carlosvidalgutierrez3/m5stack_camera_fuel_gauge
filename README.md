# M5STACK Timer Camera (esp32) example using DFRobot's Fuel Gauge

Example project to use DFRobot's Fuel Gauge for checking Li-Po batteries level.

Project developed in ESP-IDF environment on Windows 10.

## Step by step guide:
### How to connect the camera to the Fuel Gauge

### Installing IDF and flashing the code to the camera
- [x] Download and install the toolchain following the instructions: 
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/windows-setup.html
- [ ] After that, open a ESP-IDF CMD terminal and navigate to the project folder
- [ ] Clone this repo on the project folder
- [ ] On the IDF terminal run `idf.py set-target esp32`
    - (!) If 
- [ ] Run `idf.py -p <PORT> -b 112500 flash` to build and flash the code to the board (Takes a couple of minutes)
- [ ] If you don't know the port, go to Windows' *Device Manager* and check under *Ports (COM & LPT)*
- [ ] 