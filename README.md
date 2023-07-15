# Raspberry Pi Pico CPU Temperature

Arduino library to read the temperature from the Raspberry Pi Pico's internal temperature sensor.

## Installation

You can install this library using the Arduino IDE's Library Manager. Search for "Raspberry Pi Pico CPU Temperature" and install the latest version.

## Usage

```cpp
#include <CPU.h>  // Include the library to use the CPU temperature sensor

CPU cpu;  // Create an instance of the CPU temperature sensor

void setup() {
  Serial.begin(9600);
  cpu.begin();  // Initialize the CPU temperature sensor
}

void loop() {
  // Print the CPU temperature in Celsius
  Serial.println("CPU temperature: " + String(cpu.getTemperature()) + " °C");
  delay(1000);
}
```

## License

This library is licensed under the MIT license. See [LICENSE](LICENSE) for more information.

## Contributing

Pull requests are welcome. Please commit your changes in the `dev` branch using [Conventional Commits](https://www.conventionalcommits.org/en/v1.0.0/).