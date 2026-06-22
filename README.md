# 🚗 Bluetooth Joystick \& Voice Controlled Robot Car



## 📌 Overview



This project implements an Arduino based Bluetooth Joystick and Voice Controlled Robot Car. The robot can be controlled wirelessly using an Android smartphone through a Bluetooth connection. It supports joystick based navigation as well as voice commands through a dedicated Android application.



The system uses an Arduino Uno, HC-05 Bluetooth module, L298N motor driver, and four DC geared motors.



---



## ✨ Features



* Bluetooth based wireless control

* Joystick navigation from Android app

* Voice command support

* Forward, Backward, Left, Right movement

* Diagonal movement support

* Differential motor control using L298N

* Simple and low-cost implementation



---



## 🛠 Components Used



| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| HC-05 Bluetooth Module | 1 |
| L298N Motor Driver | 1 |
| DC Gear Motors | 4 |
| Robot Chassis | 1 |
| Wheels | 4 |
| 18650 Li-ion Batteries | 2 |
| Jumper Wires | As Required |



---



## 📱 Android Application



[Application Link](https://play.google.com/store/apps/details?id=com.tabba.btcontrol)



The application provides:



* Joystick Control

* Directional Buttons

* Voice Command Support

* Bluetooth Pairing with HC-05



---



## 🔌 Pin Configuration



### L298N Motor Driver ↔ Arduino Uno



| Arduino Pin | L298N Pin | Function |
|-------------|-----------|----------|
| D3 | ENA | Left Motor Speed Control (PWM) |
| D9 | ENB | Right Motor Speed Control (PWM) |
| D4 | IN1 | Right Motor Direction 1 |
| D5 | IN2 | Right Motor Direction 2 |
| D6 | IN3 | Left Motor Direction 1 |
| D7 | IN4 | Left Motor Direction 2 |


### HC-05 Bluetooth Module ↔ Arduino Uno

| HC-05 Pin | Arduino Pin |
|-----------|-------------|
| TX | RX (D0) |
| RX | TX (D1) |
| VCC | 5V |
| GND | GND |



---



## 🎮 Supported Commands


| Command | Action |
|---------|--------|
| F | Forward |
| B | Backward |
| L | Left |
| R | Right |
| G | Forward Left |
| I | Forward Right |
| H | Backward Left |
| J | Backward Right |
| S | Stop |



---



## 📷 Hardware Image



![Hardware Model](images/model.jpg)



---



## 🔌 Circuit Diagram



![Circuit Diagram](circuit\_diagram/circuit\_diagram.png)



---



## 👨‍💻 Author



**Tushar Kanti Sahariah**



