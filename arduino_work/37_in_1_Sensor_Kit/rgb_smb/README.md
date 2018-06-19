## Synopsis

Code example of how to use a keyes full colour smb sensor for the Arduino.

## Pre-requisites

Pre-requisistes needed to run the example or to use this specific component(s)

### Hardware

#### Full colour SMB

The main thing you will need is the SMB full colour LED. Be careful witht his part is the light it creates can be exceedingly bright, try not to look directly into it.

![alt text](https://arduinomodules.info/wp-content/uploads/KY-009_RGB_full_color_LED_SMD_arduino_module-240x240.jpg "SMB")


The below resistors are only needed to prevent burnout of the part. You can probably avoid using most of the resistors if you connect the part to now "~pwm" connectors, but if following the fritzing diagram this is highly recommended. 

#### 180 OHM Resistor

![alt text](http://iamtechnical.com/sites/default/files/180-ohm-resistor-color-code.jpg "180 Ohm resistor")

#### 110 OHM Resistor X 2

![alt text](https://www.palmar.co.ke/wp-content/uploads/2017/12/110-R-1-4w-500x500.jpg "110 Ohm resistor")

## Diagram

The below diagram is how I configured it so that I could use both, utilising my lack of a bigger bread board. This set up, while it could be improved on will work. It will allow you to power the LCD and DHT11 module as well as post the DHT data to the LCD.

![alt text](RGB_LED_SMB.png "LED SMB diagram")