#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;  // 조건 만족까지 계속해서 루프 반복
  }
  Serial.println("Hello World!");
  count=toggle=0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println("++count");
  toggle=toggle_state(toggle); //toggle leD valve.
  digitalWrite(PIN_LED, toggle); //update LED status.
  delay(1000); //단위는 /ms, 1초 기다리기
}

int toggle_state(int toggle) {
  return !toggle; // 토글 상태 전환(0->1, 1->0)
}
