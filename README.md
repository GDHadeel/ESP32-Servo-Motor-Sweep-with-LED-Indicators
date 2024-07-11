# ESP32-Servo-Motor-Sweep-with-LED-Indicators

# Task 3: ESP32 Electronic Circuit with Sensor Integration

## Description

This project demonstrates a servo motor sweep using an ESP32 microcontroller. The servo motor sweeps back and forth between 0 and 180 degrees. Additionally, two LEDs indicate the direction of the servo motor: a yellow LED lights up when the servo turns left, and a blue LED lights up when the servo turns right.

## Demo

https://github.com/GDHadeel/ESP32-Servo-Motor-Sweep-with-LED-Indicators/assets/126657301/39d3d926-c6e3-49d1-82c4-fcb81efac467

## Components Used

- ESP32 microcontroller
- Servo motor
- Yellow LED
- Blue LED
- 2 x 220-ohm resistors
- Breadboard and jumper wires

## Setup

### Circuit Setup

1. **Wiring:**
   - Connect the servo motor's signal pin to GPIO 18 of the ESP32.
   - Connect the yellow LED to GPIO 2 through a 220-ohm resistor.
   - Connect the blue LED to GPIO 4 through a 220-ohm resistor.
   - Connect the ground and power appropriately.

2. **Dependencies:**
   - Install the [ESP32Servo library](https://github.com/madhephaestus/ESP32Servo).
   - You can install the library via Arduino IDE by going to `Sketch -> Include Library -> Manage Libraries` and searching for `ESP32Servo`.

### Example Code

