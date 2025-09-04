#include <AccelStepper.h>

// Pin assignments
const int dirPin = 2;
const int stepPin = 3;
const int enablePin = 8;

const int forwardBtn = 4;
const int reverseBtn = 5;
const int startBtn = 6;
const int limitSwitch = 7;

const int ledGreen = 9;
const int ledYellow = 10;
const int ledRed = 11;

AccelStepper stepper(AccelStepper::DRIVER, stepPin, dirPin);

bool running = false;

void setup() {
  pinMode(forwardBtn, INPUT_PULLUP);
  pinMode(reverseBtn, INPUT_PULLUP);
  pinMode(startBtn, INPUT_PULLUP);
  pinMode(limitSwitch, INPUT_PULLUP);

  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(enablePin, OUTPUT);

  digitalWrite(enablePin, LOW); // Enable motor driver
  stepper.setMaxSpeed(1000);    // steps/sec
  stepper.setAcceleration(200); // steps/sec^2
}

void loop() {
  // Start/Pause button
  if (digitalRead(startBtn) == LOW) {
    running = !running;
    delay(300); // debounce
  }

  // LED logic
  if (digitalRead(limitSwitch) == LOW) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, LOW);
    running = false;
  } else if (running) {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledRed, LOW);
    stepper.setSpeed(200); // flow rate set by speed
    stepper.runSpeed();
  } else {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledRed, LOW);
  }

  // Manual jog controls
  if (digitalRead(forwardBtn) == LOW) {
    stepper.move(100);
    stepper.runToPosition();
  }
  if (digitalRead(reverseBtn) == LOW) {
    stepper.move(-100);
    stepper.runToPosition();
  }
}
