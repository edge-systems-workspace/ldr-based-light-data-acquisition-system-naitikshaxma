#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Naitik Sharma
 * @date 2026-02-28
 */

#define LDR_PIN A0
int ldrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("LDR Light Monitoring System Initialized...");
}

void loop() {
}