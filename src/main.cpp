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
    Serial.begin(9600);
    Serial.println("LDR Light Monitoring System Initialized...");
}

void loop() {

    ldrValue = analogRead(LDR_PIN);

    Serial.print("LDR Value: ");
    Serial.println(ldrValue);

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)
    if (ldrValue < 400) {

        // TODO 8:
        // Print brightness status
        Serial.println("Status: BRIGHT Environment");
    } else {
        Serial.println("Status: DARK Environment");
    }

    // TODO 9:
    // Add delay
    delay(1000);
}