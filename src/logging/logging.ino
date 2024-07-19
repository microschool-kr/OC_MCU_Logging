// Adafruit의 온습도센서 라이브러리 사용
#include <Adafruit_AHTX0.h>

// 온습도 센서를 aht 변수로 선언
Adafruit_AHTX0 aht;

// 초를 세기위한 변수
int second = 0;

void setup() {
  // 시리얼 통신 시작
  Serial.begin(115200);
  
  // 연결된 온습도 센서가 AHT10 또는 AHT20인지 확인
  if (! aht.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) 
    	delay(10);
  }
  // 센서를 찾았다면 아래 메시지 출력
  Serial.println("AHT10 or AHT20 found");
}

void loop() {
  // 시리얼 모니터에 초 출력
  Serial.print(second);
  // 구분자로 쉼표를 사용하여 출력
  Serial.print(",");
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);
  // 온도를 시리얼 모니터에 출력
  Serial.print(temp.temperature); 
  Serial.print(",");
  // 습도를 시리얼 모니터에 출력
  Serial.print(humidity.relative_humidity); 
  // 줄바꿈
  Serial.println();
  // 1초마다 second 변수 1씩 증가
  second++;
  // 1초 대기하여 1초마다 출력
  delay(1000);
}
