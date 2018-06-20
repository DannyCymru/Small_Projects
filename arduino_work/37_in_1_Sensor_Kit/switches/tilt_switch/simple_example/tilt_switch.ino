int d_pin = 2; //Digital pin.

void setup() {
  Serial.begin(9600);
}

void loop() {
  int t_switch = digitalRead(d_pin);

  //A result of 0 would mean that the circuit is closed.
  if(t_switch == 0) {
    Serial.println("Closed.");
  }

  //A result of 1 would mean that the circuit is open.
  else if(t_switch == 1) {
    Serial.println("Open.");
  }

  //Just in case it gives a strange value or no value at all. Helps debugging.
  else {
    Serial.println("Value is not recognised.");
  }
    
  delay(300);
}
