const int button = 2; //Digital pin connected to switch output.
const int x = 0; //Analog pin connected to X output.
const int y = 1; //Analog pin connected to Y output.

void setup() {
  pinMode(button, INPUT); //Sets the digital pin for input.
  digitalWrite(button, HIGH);//Sets the pin to "high". BAsically turns the pin on.
  // For my purposes I had to run the ide for COM3
  Serial.begin(9600); //Opens up a port to print out information to your computer. 
}

void loop() {
  Serial.print("Button:  ");
  Serial.println(digitalRead(button));
  Serial.print("X-axis: ");
  Serial.println(analogRead(x));
  Serial.print("Y-axis: ");
  Serial.println(analogRead(y));
  Serial.print("\n\n");
  delay(500);
}
