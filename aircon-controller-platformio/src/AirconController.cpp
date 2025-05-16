#include "AirconController.h"
#include <Arduino.h>
void AirconController::begin() {
  Serial.println("AirconController init");
}
void AirconController::sendIRCode(int code) {
  Serial.printf("Sending IR code: %d\n", code);
}
