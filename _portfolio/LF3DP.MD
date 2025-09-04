---
title: "Syringe Pump Project"
excerpt: "A motor-driven syringe pump for precise liquid delivery in laboratory and medical applications."

header:
  image: /assets/img/Syringe Pump.png
  teaser: /assets/img/Syringe Pump.png
#gallery:
  #- image_path: assets/img/Slide-3.png
  #- image_path: assets/img/Slide-2.png
  #- image_path: assets/img/Slide-4.png
   
---

# Features

* **Precise Fluid Delivery (10–20 mL syringes).** Compatible with multiple syringe sizes, ensuring controlled flow rates and repeatable dosing.  
* **User-Friendly Controls.** Includes start/pause button, forward/reverse jog buttons, and LED indicators (green = running, yellow = paused, red = empty).  
* **Stepper Motor with Microstepping.** NEMA 17 motor coupled with lead screw provides stable motion and minimized vibration.  
* **Safety Enclosure.** PLA housing protects electronics from finger contact and water intrusion.  
* **Replaceable Syringes.** Quick setup with adjustable carriage supports for various syringe diameters.  

# Bill of Materials (Off-the-Shelf Parts)

| **Category**         | **Components** |
|-----------------------|----------------|
| **Mechanical**       | Lead-Screw TR8x8x250mm, Linear Rod 8mm×200mm, LM8UU Linear Bearing, F688ZZ Flanged Ball Bearing, Flexible Coupler, Lock Collars (lead screw & rod), Nut TR8x8-4, V-Slot 20×40×350, Syringe (20 mL threaded), M3x8 Thread-Forming Screws, M3x10 mm Bolts, M5 Tree Nut, M5x8 mm Bolts |
| **Electronics**      | Arduino Uno (with Breadboard), NEMA 17 Stepper Motor, Mean Well RT-65D Power Supply, Limit Switch |
| **User Interface**   | Green LED, M10 Push Button, Push Button SGI R13-502 (start/stop), Forward/Reverse Buttons |
| **Miscellaneous**    | Heat shrink tubing, Wiring, PLA/PETG 3D-printed supports and enclosure |

---

# Operation

1. Plug in the power supply.  
2. Mount syringe(s) into the support and adjust carriage to contact plunger.  
3. Use **forward/reverse buttons** to set syringe position.  
4. Set flow rate in Arduino code (or via serial input).  
5. Press **start button** to begin (LED turns **green**).  
6. Press start again to pause (LED turns **yellow**).  
7. When syringe empties, **red LED** lights. Replace syringe and reset.  

---

# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4e4817c2c9a4c46ed?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Syringe Pump project" %}

# Arduino Code

```cpp
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
  // Start/Pause toggle
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
    stepper.setSpeed(200); // flow rate = speed
    stepper.runSpeed();
  } else {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledRed, LOW);
  }

  // Manual jogging
  if (digitalRead(forwardBtn) == LOW) {
    stepper.move(100);
    stepper.runToPosition();
  }
  if (digitalRead(reverseBtn) == LOW) {
    stepper.move(-100);
    stepper.runToPosition();
  }
}



