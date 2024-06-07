#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// Define your configuration here
#define BOARD_TYPE ESP8266  // Options: ESP32, ESP8266, RPI2040
#define IMU_TYPE MPU9250    // Options: BNO055, BNO085, MPU9250, ICM20948
#define DISPLAY_TYPE OLED   // Options: OLED, TFT

// Serial communication baud rate
#define SERIAL_BAUD_RATE 115200

// Pins for LEDs and laser
#define RED_LED_PIN 16
#define GREEN_LED_PIN 14
#define BLUE_LED_PIN 12
#define LASER_PIN 13

// Pins array for easier iteration
const int ledPins[] = {RED_LED_PIN, GREEN_LED_PIN, BLUE_LED_PIN, LASER_PIN};

// I2C Addresses
#define BNO055_ADDRESS 0x28
#define BNO085_ADDRESS 0x4A
#define MPU9250_ADDRESS 0x68
#define ICM20948_ADDRESS 0x68
#define SSD1306_ADDRESS 0x3C
#define ST7789_CS    10
#define ST7789_RST   9
#define ST7789_DC    8

// Include libraries based on configuration
#if IMU_TYPE == BNO055
#include <Adafruit_BNO055.h>
#elif IMU_TYPE == BNO085
#include <Adafruit_BNO08x.h>
#elif IMU_TYPE == MPU9250
#include <MPU9250.h>
#elif IMU_TYPE == ICM20948
#include <ICM20948.h>
#endif

#if DISPLAY_TYPE == OLED
#include <Adafruit_SSD1306.h>
#elif DISPLAY_TYPE == TFT
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#endif

#endif
