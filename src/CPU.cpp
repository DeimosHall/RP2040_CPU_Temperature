/*
 * Raspberry Pi Pico CPU Temperature sensor library
 * Author: Francisco Torres (deimoshall.dev)
 * Date: July 2023
 * License: MIT
 * Repository: https://github.com/DeimosHall/RP2040_CPU_Temperature.git
*/

#include "Arduino.h"
#include "CPU.h"

void CPU::begin() {
#if defined(__PINS_ARDUINO__)
  adc_init();
  adc_set_temp_sensor_enabled(true);
  // Select ADC input 4 for internal temperature sensor
  adc_select_input(4);
#endif
}

float CPU::getTemperature() {
#if defined(__PINS_ARDUINO__)
  uint16_t adc = adc_read();
  float ADC_Voltage = float(adc) * this->CONVERSION_FACTOR;
  return 27 - (ADC_Voltage - 0.706) / 0.001721;  // formula found on page 71 (section 4.1.1. hardware_adc) of the Raspberry Pi Pico C/C++ SDK documentation
#else
  return analogReadTemp();
#endif
}