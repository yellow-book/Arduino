int LED = 13;
int BUTTON = 7;
int flag1 = 0;
int flag2 = 0;
int state = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  flag1 = digitalRead(BUTTON);
  if ((flag1 == HIGH) && (flag2 == LOW)) {
    state = 1 - state;
    delay(10);
  }
  flag2 = flag1;

  if (state == 1) {
    digitalWrite(LED, HIGH);
  }else {
    digitalWrite(LED, LOW);
  }
}
