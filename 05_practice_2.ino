#define PIN_LED 7 //7번 핀에 LED 연결

void setup() {
  // LED 출력:
  pinMode(PIN_LED, OUTPUT);

}

void loop() {
  // 첫 1초 동안은 LED 켜기:
  digitalWrite(PIN_LED, 0);
  delay(1000);

  int i=0;
  while (i<5) {
    digitalWrite(PIN_LED, 1);
    delay(100);
    digitalWrite(PIN_LED, 0);
    delay(100);
    i++;
    //한 루프당 0.2초씩 5회 반복 -> 1초 동안 LED 5번 깜빡임
  }

  digitalWrite(PIN_LED, 1); //LED 끄기
  
  while(1) {
    //무한루프 상태로 종료
  }
  
}
