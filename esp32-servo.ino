#include <ESP32Servo.h>

const int servoPin = 18;
const int yellowLedPin = 14; 
const int blueLedPin = 25;   

Servo servo;

void setup() {
  servo.attach(servoPin, 500, 2400);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

int pos = 0;

void loop() {
  // Turning servo to the right
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(blueLedPin, HIGH);
  for (pos = 0; pos <= 180; pos += 1) {
    servo.write(pos);
    delay(15);
  }

  // Turning servo to the left
  digitalWrite(blueLedPin, LOW);
  digitalWrite(yellowLedPin, HIGH);
  for (pos = 180; pos >= 0; pos -= 1) {
    servo.write(pos);
    delay(15);
  }
}
