#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);

}

void loop() {
  // 1초 동안 LED 켜기
  digitalWrite(PIN_LED, 0);
  delay(1000);

  // 1초 동안 LED 5회 깜빡거리기
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 1);
    delay(100);
    digitalWrite(PIN_LED, 0);
    delay(100);
  } 

  // LED를 끄고 무한 루프 상태에서 종료
  digitalWrite(PIN_LED, 1);

  while (1) {
    
  } // infinite loop

}
