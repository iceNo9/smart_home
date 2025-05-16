#pragma once
#include <Arduino.h>
#include <vector>
#include "Alarm.h"

class AlarmManager {
public:
  void begin();
  void loadAlarms();
  void update(unsigned long currentTime);
private:
  std::vector<Alarm> alarms;
};
