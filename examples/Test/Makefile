BOARD_TAG = arduino:mbed_rp2040:pico
# BOARD_TAG = rp2040:rp2040:rpipico
# BOARD_TAG = rp2040:rp2040:rpipicow
MONITOR_PORT = /dev/cu.usbmodem112301

compile:
	arduino-cli compile --fqbn $(BOARD_TAG)

upload:
	arduino-cli upload -p $(MONITOR_PORT) --fqbn $(BOARD_TAG) --verbose

monitor:
	arduino-cli monitor -p $(MONITOR_PORT)

clean:
	arduino-cli cache clean

all: compile upload monitor
