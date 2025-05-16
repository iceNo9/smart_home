#include "AlarmManager.h"
#include <Arduino.h>

void AlarmManager::begin() {
  Serial.println("AlarmManager init");
}
void AlarmManager::loadAlarms() {
  Serial.println("Loading alarms");
  // TODO: load from storage
}
void AlarmManager::update(unsigned long currentTime) {
  // TODO: check alarms
}
