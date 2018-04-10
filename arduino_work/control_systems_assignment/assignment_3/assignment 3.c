//Global temperature sensor variables
const int a_sensor_pin = A0;
const float baseline_temp = 20.0;

//Global buzzer variables
const int buzzer_pin = 5;
int frequency = 392;

//Global motion sensor variables
const int d_sensor_pin = 6;
int pir_state = LOW;



void setup() {
  //Opens a serial port at the arduino communication speed
  Serial.begin(9600);

  //Opens port for buzzer output
  pinMode(buzzer_pin, OUTPUT);

}

void loop() {

  //Reads in the analog for the temperature data
  int t_sensor_val = analogRead(a_sensor_pin);

  //Mathmatically works out the estimated voltage it is receiving and then prints out the data, this allows for a conversion to digital
  float voltage = (t_sensor_val/1024.0) * 5.0;

  //uses the voltage to help determine the temperature in degrees C and prints out the data
  float temperature = (voltage - .5) * 100;
  Serial.println(temperature);

  //Reads in digital data for motion sensor
  int m_sensor_val = digitalRead(d_sensor_pin);

  //Checks if there is movement and if the temperature is above 25 degrees C
  if(m_sensor_val == HIGH && temperature > 25) {
   if (pir_state == LOW) {

      //Prints information to system for debugging
      Serial.println("Motion Detected!");

      pir_state = HIGH;

      //Function that outputs the information for the buzzer to make the noise
      tone(buzzer_pin, frequency);
   }
  } else {
    if (pir_state == HIGH) {
      Serial.println("Motion Ended!");

      //resets the loop
      pir_state = LOW;

      //Turns the buzzer off
      noTone(buzzer_pin);
    }
  }

}
