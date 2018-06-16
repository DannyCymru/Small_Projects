int d_pin = 3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(d_pin);

  Serial.println(val);
  delay(300);
}
