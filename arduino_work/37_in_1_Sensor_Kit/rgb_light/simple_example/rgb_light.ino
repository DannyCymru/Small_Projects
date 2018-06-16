//Digital pins for the different colour outputs.
const int red = 12;
const int green = 13;
const int blue = 11;

void setup() {
  //Sets all the pins to output.
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH); //Turns the red light on.
  delay(300); //0.3 second delay.
  digitalWrite(green, HIGH); //Turns the green light on.
  delay(300);
  digitalWrite(blue, HIGH); //Turns the blue light on.
  delay(3000); //3 second delay.
  digitalWrite(red, LOW); //Turns the red light off.
  delay(300);
  digitalWrite(green, LOW); //Turns the green light off.
  delay(300);
  digitalWrite(blue, LOW); //Turns the blue light off.
  delay(3000);
}
