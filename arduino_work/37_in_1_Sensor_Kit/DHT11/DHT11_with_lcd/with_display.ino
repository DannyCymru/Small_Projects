#include <dht.h>
#include <LiquidCrystal.h>

dht DHT;
//Defines the pin I used for the sensor
#define DHT11_PIN 7

//List of digital pins used by the LCD in this setup.
LiquidCrystal lcd(0, 1, 8, 9, 10, 11);

void setup(){
  /* Sets dimensions of the LCD display
   * for the lcd display I used it was 16 x 2
   */
  lcd.begin(16, 2);
}

void loop(){
  //Initalises the DHT to allow us to collect its data
  int check = DHT.read11(DHT11_PIN);
  
  // Sets the cursor to column 0, line 0 (Top left)
  lcd.setCursor(0,0);
  lcd.print("Temperature:"); //Prints this text
  lcd.print(DHT.temperature); //Prints DHT data directly next to text

  //Sets cursor to column 0, line 1 (Bottom left)
  lcd.setCursor(0,1); 
  lcd.print("Humidity:   ");
  lcd.print(DHT.humidity);
  
  delay(5000); //Sets a 5 second delay
  lcd.clear(); //Clears the screen, just so that there aren't any weird character erros from the next reading
}
