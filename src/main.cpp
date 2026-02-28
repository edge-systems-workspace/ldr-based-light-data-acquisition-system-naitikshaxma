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

    // TODO 5:
    // Read analog value from LDR
    ldrValue = analogRead(LDR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);
}