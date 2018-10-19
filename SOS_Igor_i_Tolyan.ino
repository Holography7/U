void setup() {
  pinMode(13, OUTPUT);
}
void dot() {
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}

void dash() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}

void loop() {
  for(int i = 0; i < 3; i++) {
    dot();
  }
  for(int i = 0; i < 3; i++) {
    dash();
  }
  for(int i = 0; i < 3; i++) {
    dot();
  }
}
