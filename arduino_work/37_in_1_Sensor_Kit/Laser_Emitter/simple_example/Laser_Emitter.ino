//Pin you connected the component into. For my set up its pin 3.
int component_pin = 3;

void setup() {
  //Tells the computer to start this serial monitor, we will be printing voltage data to this.
  Serial.begin(9600);
  //Tells the Arduino that the component on this pin is going to be output
  pinMode(component_pin, OUTPUT);

  digitalWrite(component_pin, LOW); //Making sure its off on restart. Best to makesure you don't blind yourself
}

void loop() {
 
 digitalWrite(component_pin, HIGH); //On
 delay(5000);
 
 //Needs to be defined here as we want the value when the light is turned on
 int volt = analogRead(A5); //Reads the analog data from the component, this gives us the information needed to calculate voltage
 float voltage = volt *(5.0/1023.0); //Calculation to decypher voltage
 
 //Code to check the amount of voltage being given to the component. Should be about 5V's
 Serial.print("The voltage currently used by the emitter is:");
 Serial.println(voltage);
 
 digitalWrite(component_pin, LOW); //Off
 delay(5000);

}
