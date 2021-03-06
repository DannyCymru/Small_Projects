## Synopsis

Code example of how to use a keyes full colour smb sensor for the Arduino.

## Pre-requisites

Pre-requisistes needed to run the example or to use this specific component(s)

### Hardware

#### Full colour SMB

The main thing you will need is the SMB full colour LED. Be careful witht his part is the light it creates can be exceedingly bright, try not to look directly into it.

![alt text](https://arduinomodules.info/wp-content/uploads/KY-009_RGB_full_color_LED_SMD_arduino_module-240x240.jpg "SMB")

The below resistors are only needed to prevent burnout of the part. You can probably avoid using most of the resistors if you connect the part to non "~pwm" connectors, but if following the fritzing diagram this is highly recommended. 

#### 180 OHM Resistor

![alt text](http://iamtechnical.com/sites/default/files/180-ohm-resistor-color-code.jpg "180 Ohm resistor")

#### 110 OHM Resistor X 2

![alt text](https://www.palmar.co.ke/wp-content/uploads/2017/12/110-R-1-4w-500x500.jpg "110 Ohm resistor")

## Diagrams

![alt text](https://raw.githubusercontent.com/ErebusC/Small_Projects/master/arduino_work/37_in_1_Sensor_Kit/arduino_fritzing/RGB_LED_SMB.png "LED SMB diagram")

This code will also work with the standard full colour RGB LED so I will also include a diagram for it below.

![alt text](https://raw.githubusercontent.com/ErebusC/Small_Projects/master/arduino_work/37_in_1_Sensor_Kit/arduino_fritzing/RGB_LED.png "RGB LED diagram")