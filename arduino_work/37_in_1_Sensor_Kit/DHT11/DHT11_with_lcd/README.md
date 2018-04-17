## Synopsis

Code example of how to use a DHT11 sensor for the Arduino. In this example we will be using it in conjunction with an LCD display. Simply download the DHT11.ino file and upload it to the arduino to get temperature and humidity readings from the area.

## Pre-requisites

Pre-requisistes needed to run the example or to use this specific component(s)

### Hardware

#### DHT11

The main thing you will need is this. A DHT11 sensor. This sensor, otherwise known as an temperature and humidity sensor. The provided library will only work with this type of sensor.

![alt text](https://www.tertiaryrobotics.com/pub/media/catalog/product/cache/c687aa7517cf01e65c009f6943c2b1e9/d/h/dht11_temperature_and_humidity_sensor_module_for_arduino.jpg "DHT11")

#### Liquid Crystal LCD display

We will be using this to display the humidity and temperature to the display. This is a useful thing to learn how to do as if we wanted we could build it into an encloser and use the display to see whatever stats we need from the embedded device.

![alt text](https://howtomechatronics.com/wp-content/uploads/2015/07/LCD-Display-Tutorial.png?x57244 "LCD display")

#### 220 OHM Resistor

We need this resistor for the LCD display to regulate the power going into the component.

![alt text](https://images-na.ssl-images-amazon.com/images/I/31onXBBRS8L._SX342_.jpg "220 Ohm resistor")

## Library

To create the code example I used a library called DHTLib. I have provided a zip file of this library in the subdirectory. Incase it is out of date or new functions have been added you can download a copy from the original author [here](https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTlib)

## Diagram

The below diagram is how I configured it so that I could use both, utilising my lack of a bigger bread board. This set up, while it could be improved on will work. It will allow you to power the LCD and DHT11 module as well as post the DHT data to the LCD.

![alt text](https://raw.githubusercontent.com/ErebusC/Small_Projects/master/arduino_work/37_in_1_Sensor_Kit/arduino_fritzing/dht11_lcd_display_sketch.jpg "DHT + LCD screen diagram")