#include "TimeManager.h"
#include <Arduino.h>

void TimeManager::begin() {
  Serial.println("TimeManager init");
}
void TimeManager::update() {
  // TODO: update time
}
unsigned long TimeManager::getCurrentTime() {
  return millis()/1000;
}
