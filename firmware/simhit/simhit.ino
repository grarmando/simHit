#include "Configuration.h"
#include "Functions.h"

// Main setup function
void setup() {
  Serial.begin(SERIAL_BAUD_RATE);

  // Initialize LED pins
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  // Initialize IMU
  initializeIMU();

  // Initialize Display
  initializeDisplay();
}

// Main loop function
void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    handleCommand(command);
  }
}
