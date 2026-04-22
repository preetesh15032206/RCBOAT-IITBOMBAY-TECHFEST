#include <Servo.h>

Servo escLeft;
Servo escRight;

char cmd;
int baseSpeed = 1500;
int speedValue = 0;

int getSpeed(int val) {
  return map(val, 0, 100, 1500, 1900);
}

void setup() {
  Serial.begin(9600);

  escLeft.attach(9);
  escRight.attach(10);

  escLeft.writeMicroseconds(1000);
  escRight.writeMicroseconds(1000);
  delay(3000);
}

void loop() {
  if (Serial.available()) {
    cmd = Serial.read();

    if (cmd >= '0' && cmd <= '9') {
      speedValue = (cmd - '0') * 10;
      baseSpeed = getSpeed(speedValue);
    } else if (cmd == 'q') {
      speedValue = 100;
      baseSpeed = getSpeed(speedValue);
    }

    int left = baseSpeed;
    int right = baseSpeed;

    switch (cmd) {
      case 'F': left = baseSpeed; right = baseSpeed; break;
      case 'B': left = 1300; right = 1300; break;
      case 'L': left = 1400; right = baseSpeed; break;
      case 'R': left = baseSpeed; right = 1400; break;
      case 'G': left = baseSpeed - 200; right = baseSpeed; break;
      case 'I': left = baseSpeed; right = baseSpeed - 200; break;
      case 'H': left = 1300; right = 1400; break;
      case 'J': left = 1400; right = 1300; break;
      case 'S': left = 1500; right = 1500; break;
    }

    left = constrain(left, 1100, 1900);
    right = constrain(right, 1100, 1900);

    escLeft.writeMicroseconds(left);
    escRight.writeMicroseconds(right);
  }
}
