#include <Arduino.h>
int i=0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Hello, world! Nr. " + String(i++));
  delay(500);
}

extern "C" void SystemClock_Config(void){ return; }
