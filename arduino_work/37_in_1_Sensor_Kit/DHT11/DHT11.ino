// Including the library for the DHT device 
#include <dht.h>
dht DHT;
// deines the pin to the digital input its connected into.
#define DHT11_PIN 2

void setup() {
   //Tells the arduino what serial monitor to print to.
  Serial.begin(9600);
  }

void loop() {
  /*Initialises the DHT and allows for you to read the data from the sensor
   * In the library DHT.read11 checks that the DHT is functional.
   * This library works with multiple types of DHT sensors, not just the 11 model.
   */
  int check = DHT.read11(DHT11_PIN);
  
  //Prints the below text with the temperature data
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature); //println creates an escape character, effectively creating a new line in the serial monitor
  
  //Prints the below text with the humidity data
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(5000); //5 second delay
}
