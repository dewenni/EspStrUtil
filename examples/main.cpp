#include <Arduino.h>
#include <../src/EspStrUtil.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Hello, World!");
  Serial.println(EspStrUtil::intToString(42));
}

void loop() {
  // put your main code here
}