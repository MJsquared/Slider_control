# Slider_control

The PSM01 is a motorised linear slide potentiometer.

This breakout allows the control of the device over the popular Stemma QT/QWIIC interface. The user can control the speed of the slider, and thanks to the dedicated servo track, easily send position commands like that of a servo. 

Power for the motor is broken out to a screw terminal, along with the separate  potentiometer feedback. The 'touch' pin from the potentiometer feeds into the on board ATTINY. 

The PCB can be snapped apart to allow either the 100mm or 60mm potentiometer variant. 

The PCB also features 8 I2C address pins. 


Sample Arduino code is provided to control the slider

# How to control

It's an I2C controllable device with the default address of 0xE7.

It has two writable registers 
* 15 to control location (0-255).
* 16 to control speed (0-255) 90 as a default.

And has one readable register to find out current position of the slider:
* 17 to read the current location of the slider (0-255).


https://user-images.githubusercontent.com/110398034/182431502-d8a56933-2cf8-430a-bb1e-94257aa0ac5a.mp4

