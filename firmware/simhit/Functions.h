#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Configuration.h"

// IMU Instances
#if IMU_TYPE == BNO055
Adafruit_BNO055 imu = Adafruit_BNO055(55);
#elif IMU_TYPE == BNO085
Adafruit_BNO08x imu = Adafruit_BNO08x();
#elif IMU_TYPE == MPU9250
MPU9250 imu(Wire, MPU9250_ADDRESS);
#elif IMU_TYPE == ICM20948
ICM20948 imu(Wire, ICM20948_ADDRESS);
#endif

// OLED Display
#if DISPLAY_TYPE == OLED
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
#endif

// TFT Display
#if DISPLAY_TYPE == TFT
Adafruit_ST7789 display(ST7789_CS, ST7789_DC, ST7789_RST);
#endif

// Initialize IMU based on selected type
void initializeIMU() {
    #if IMU_TYPE == BNO055
    if (!imu.begin()) {
        Serial.println("No BNO055 detected");
        while (1);
    }
    delay(1000);
    #elif IMU_TYPE == BNO085
    if (!imu.begin()) {
        Serial.println("No BNO085 detected");
        while (1);
    }
    delay(1000);
    #elif IMU_TYPE == MPU9250
    if (imu.begin() != 0) {
        Serial.println("No MPU9250 detected");
        while (1);
    }
    #elif IMU_TYPE == ICM20948
    if (imu.begin() != 0) {
        Serial.println("No ICM20948 detected");
        while (1);
    }
    #endif
}

// Initialize display based on selected type
void initializeDisplay() {
    #if DISPLAY_TYPE == OLED
    if (!display.begin(SSD1306_ADDRESS, OLED_RESET)) {
        Serial.println(F("SSD1306 allocation failed"));
        for (;;);
    }
    display.display();
    delay(2000);
    display.clearDisplay();
    #elif DISPLAY_TYPE == TFT
    display.init(170, 320);
    display.setRotation(1);
    display.fillScreen(ST77XX_BLACK);
    #endif
}

// Handle incoming commands
void handleCommand(String command) {
    if (command.startsWith("L")) {
        int pin = command.substring(1, 3).toInt();
        char state = command.charAt(3);
        digitalWrite(pin, state == 'O' ? HIGH : LOW);
    } else if (command == "IMU") {
        #if IMU_TYPE == BNO055
        sensors_event_t event;
        imu.getEvent(&event);
        Serial.print("X: ");
        Serial.print(event.orientation.x);
        Serial.print(" Y: ");
        Serial.print(" Z: ");
        Serial.println(event.orientation.z);
        #elif IMU_TYPE == BNO085
        // Replace with actual BNO085 data retrieval logic
        Serial.println("BNO085 data not implemented");
        #elif IMU_TYPE == MPU9250
        imu.readSensor();
        Serial.print("X: ");
        Serial.print(imu.getAccelX_mss());
        Serial.print(" Y: ");
        Serial.print(imu.getAccelY_mss());
        Serial.print(" Z: ");
        Serial.println(imu.getAccelZ_mss());
        #elif IMU_TYPE == ICM20948
        imu.readSensor();
        Serial.print("X: ");
        Serial.print(imu.getAccelX_mss());
        Serial.print(" Y: ");
        Serial.print(imu.getAccelY_mss());
        Serial.print(" Z: ");
        Serial.println(imu.getAccelZ_mss());
        #endif
    } else if (command.startsWith("O")) {
        String text = command.substring(1);
        #if DISPLAY_TYPE == OLED
        display.clearDisplay();
        display.setTextSize(1);
        display.setTextColor(SSD1306_WHITE);
        display.setCursor(0, 0);
        display.println(text);
        display.display();
        #elif DISPLAY_TYPE == TFT
        display.fillScreen(ST77XX_BLACK);
        display.setCursor(0, 0);
        display.setTextColor(ST77XX_WHITE);
        display.setTextWrap(true);
        display.print(text);
        #endif
    }
}

#endif
