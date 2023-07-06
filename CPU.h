#ifndef CPU_h
#define CPU_h

#include "Arduino.h"

class CPU {
 private:
  const float CONVERSION_FACTOR = 3.3f / (1 << 12);  // 12-bit conversion, assume max value == ADC_VREF == 3.3 V

 public:
  CPU();
  void begin();
  float getTemperature();
};

#endif