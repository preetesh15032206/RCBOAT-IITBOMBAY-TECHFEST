# 🚤 Arduino Bluetooth RC Boat (Dual Brushless Motors)

## 📌 Overview
This project uses an Arduino + HC-05 Bluetooth module to control a dual brushless motor RC boat using a mobile app.

---
## 🎥 Demo Videos

- 🚤 Demo 1: [Click to Watch](https://drive.google.com/file/d/1q3Vu1lhbuiS1FUIFLPv8l6mr1qZVTX9v/view?usp=drive_link)
- 🚤 Demo 2: [Click to Watch](https://drive.google.com/file/d/1pE7IJc1f8R7C6nTnAXi7cJ5qzW8pQTtZ/view?usp=sharing)

## ⚙️ Features
- Dual ESC control
- Bluetooth mobile control
- Differential steering
- Speed control (0–100%)
- Supports diagonal movement

---

## 🧠 Architecture
Mobile App → Bluetooth (HC-05) → Arduino → ESC → Motors

---

## 🎮 Controls
| Command | Action |
|--------|--------|
| F | Forward |
| B | Back |
| L | Left |
| R | Right |
| G | Forward Left |
| I | Forward Right |
| H | Back Left |
| J | Back Right |
| S | Stop |
| 0–9 | Speed levels |
| q | Max speed |

---

## 🔧 Hardware Required
- Arduino (UNO/Nano)
- HC-05/HC-06 Bluetooth module
- 2 × Brushless Motors
- 2 × ESC
- LiPo Battery
- 3D Printed Boat Hull

---

## 🔌 Connections
- HC-05 TX → Arduino RX
- HC-05 RX → Arduino TX (use voltage divider)
- ESC Left → Pin 9
- ESC Right → Pin 10

---

## ⚠️ Important
- Calibrate ESC before use
- Ensure waterproofing
- Use proper power supply

---

## 🚀 Future Improvements
- GPS Navigation
- Gyroscope stabilization
- FPV Camera
- Autonomous mode

---

Built for speed, control, and Techfest-level performance.
