const int buzzer_pin = 2; //Constant variable to set the digital pin.
int frequency = 392; //Sets the frequency of the buzzer.
void setup() {
  pinMode(buzzer_pin, OUTPUT); //Sets the pin/device to be ready to output.
}

void loop() {
  delay(3000); //3 second delay.
  tone(buzzer_pin, frequency);//Creates a tone using the digital pin and the predefined frequency.
  delay(3000); //3 second delay.
  noTone(buzzer_pin); //Turns the annoying sound off.
}
