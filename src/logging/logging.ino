#include <Adafruit_AHTX0.h>

Adafruit_AHTX0 aht;

int second = 0;

void setup() {
  Serial.begin(115200);

  if (! aht.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) delay(10);
  }
  Serial.println("AHT10 or AHT20 found");
}

void loop() {
  Serial.print(second);
  Serial.print(",");
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);
  Serial.print(temp.temperature); 
  Serial.print(",");
  Serial.print(humidity.relative_humidity); 
  Serial.println();
  second++;
  delay(1000);
}
