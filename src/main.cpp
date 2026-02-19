#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author AkshitaAg25
 * @date 2026-02-19
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

 // TODO 1:
 // Define RED pin (Use 9)
int red=9;

 // TODO 2:
 // Define GREEN pin (Use 10)
int green=10;

 // TODO 3:
 // Define BLUE pin (Use 11)
int blue=11;

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud)
    Serial.begin(9600);

    // TODO 5:
    // Configure RGB pins as OUTPUT
    pinMode(red,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(blue,OUTPUT);

    // TODO 6:
    // Print initialization message
    Serial.println("RGB LED Control Initialized");
}

void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)
    digitalWrite(red,HIGH);

    // TODO 8:
    // Turn OFF red
    digitalWrite(red,LOW);

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()
    analogWrite(red,128); // 50% brightness

    // TODO 10:
    // Set GREEN brightness using analogWrite()
    analogWrite(green,64); // 25% brightness

    // TODO 11:
    // Set BLUE brightness using analogWrite()
    analogWrite(blue,255); // 100% brightness

    // TODO 12:
    // Add delay for visible transition
    delay(1000);
}
