const int a_input = A0; //Pin used for the analogue input.
double percentage = 0.75; //Sets a variable for the percentage used in the heart rate calculation.

void setup ()
{
  Serial.begin (9600); //Opens up connection to the serial port.
}
void loop ()
{
    int raw_value = analogRead(a_input); //Gets the raw value from the input device.
    double heart_rate = percentage * 0 + (1 - percentage) * raw_value; //Calculation to get heart rate, however this component in general isn't very reliable.

    Serial.print("Your heart rate is: ");
    Serial.println(heart_rate);
    
    delay (3000); //3 second delay.
}
