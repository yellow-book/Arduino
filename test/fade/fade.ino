const int LED = 11;
int i = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (i = 0; 1 <255; i++) {
    analogWrite(LED, i);
    delay(20);
  }

  for (i =255; 1 > 0; i--) {
  analogWrite(LED, i);
  delay(20);
}
}
