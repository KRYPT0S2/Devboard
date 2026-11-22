void setup() {
  for (int p = 0; p <= 24; p++) {
    pinMode(p, OUTPUT);
  }
}

void loop() {
  for (int p = 0; p <= 24; p++) {
    digitalWrite(p, HIGH);
    delay(50);
    digitalWrite(p, LOW);
  }
}