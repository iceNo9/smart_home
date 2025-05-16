#pragma once
#include <Arduino.h>
struct Alarm {
  uint8_t hour;
  uint8_t minute;
  int irCode;
  bool enabled;
};
