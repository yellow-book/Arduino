int BuzzerPin = 12;
int num = 29;
int tones[] = {261, 294, 330, 349, 392, 440, 494, 523, 0};
//              C    D    E    F    G    A    b    C
int airplane[] = {3, 2, 1, 2, 3, 3, 3, 9, 2, 2, 2, 9, 3, 3, 3, 9, 3, 2, 1, 2, 3, 3, 3, 9, 2, 2, 3, 2, 1};

void setup() {
  for (int i = 0; i < num; i++) {
    tone(BuzzerPin, airplane[i]);
    delay(300);
    noTone(BuzzerPin);
    delay(20);
  }
  noTone(BuzzerPin);
}

void loop() {
  // put your main code here, to run repeatedly:

}
