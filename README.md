# Slider_control
Sample arduino code to controll the slider

# How to control

Its an I2C controlable device with the default adress of 0xE7.

It has two writable registers 
* 15 to control location (0-255).
* 16 to control speed (0-255) 90 as a default.

And has one readable register to find out current position of the slider:
* 17 to read the current location of the slider (0-255).
