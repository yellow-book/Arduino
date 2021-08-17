/*
 제목    : 3색 LED 깜박이기
 내용   : 3색 LED를 오렌지 보드에 연결하여 색상별로 깜빡이도록 해봅시다.
 */

// 3색 LED의 각 핀을 9, 10, 11번으로 설정합니다.(빨강 = 9, 초록 = 10, 파랑 = 11)
int red = 9;
int blue = 11;

// 실행시 가장 먼저 호출되는 함수이며, 최초 1회만 실행됩니다.
// 변수를 선언하거나 초기화를 위한 코드를 포함합니다.
void setup() {
  // 3색 LED의 각 핀을 OUTPUT으로 설정합니다.
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
}

// setup() 함수가 호출된 이후, loop() 함수가 호출되며,
// 블록 안의 코드를 무한히 반복 실행됩니다.
void loop() {
  // 3색 LED의 빨간색 LED가 켜지도록 합니다.
  digitalWrite(red, HIGH);
  // 0.5초 동안 대기합니다.
  delay(500);
  // 3색 LED의 파란색 LED가 켜지도록 합니다.
  digitalWrite(blue, HIGH);
  // 0.5초 동안 대기합니다.
  delay(500);
}
