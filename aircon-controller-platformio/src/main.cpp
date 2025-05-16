#include <Arduino.h>
#include "AirconController.h"
#include "AlarmManager.h"
#include "TimeManager.h"
#include "StorageManager.h"
#include "WebServerManager.h"

AirconController aircon;
AlarmManager alarmManager;
TimeManager timeManager;
StorageManager storageManager;
WebServerManager webServer;

void setup() {
  Serial.begin(115200);
  aircon.begin();
  storageManager.begin();
  timeManager.begin();
  alarmManager.begin();
  webServer.begin();

  // Load alarms from storage
  alarmManager.loadAlarms();
}

void loop() {
  timeManager.update();
  alarmManager.update(timeManager.getCurrentTime());
  webServer.handleClient();
}
