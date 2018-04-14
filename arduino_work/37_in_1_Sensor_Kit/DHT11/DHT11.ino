// Including the library for the DHT device 
#include <dht.h>
dht DHT;
// deines the pin to the digital input its connected into.
#define DHT11_PIN 2

//int pin = 2;

void setup() {
  //pinMode(pin, INPUT);

  //Tells the arduino what serial monitor to print to.
  Serial.begin(9600);
  

}

void loop() {
  /* My attempt to check to make sure the pin was accepting data.
  value = digitalRead(pin);
  Serial.println(value);
  */

  /*Initialises the DHT and allows for you to read the data from the sensor
   * In the library DHT.read11 checks that the DHT is functional.
   * This library works with multiple types of DHT sensors, not just the 11 model.
   */
  int check = DHT.read11(DHT11_PIN);

  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
}
