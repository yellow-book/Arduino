int LED = 13;
int BUTTON = 7;
int state = 0;
int buttonState;
int count = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  buttonState = digitalRead(BUTTON);
  if (buttonState == HIGH) {
    if (state == 0) {
      delay(10);
      state = 1;
    }
  }
  if (buttonState == LOW) {
    if (state == 1) {
      count  += 1;
      delay(10);
      state = 0;
    }
  }
  if (count >= 4) {
    digitalWrite(LED, HIGH);
  }
}
