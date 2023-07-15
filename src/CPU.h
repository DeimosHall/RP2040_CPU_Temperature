/*
 * Raspberry Pi Pico CPU Temperature sensor library
 * Author: Francisco Torres (deimoshall.dev)
 * Date: July 2023
 * License: MIT
 * Repository: https://github.com/DeimosHall/RP2040_CPU_Temperature.git
*/

#ifndef CPU_h
#define CPU_h

#include "Arduino.h"

class CPU {
 private:
  const float CONVERSION_FACTOR = 3.3f / (1 << 12);  // 12-bit conversion, assume max value == ADC_VREF == 3.3 V

 public:
  void begin();
  float getTemperature();
};

#endif