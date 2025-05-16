#pragma once
#include <Arduino.h>

class TimeManager {
public:
  void begin();
  void update();
  unsigned long getCurrentTime();
};
