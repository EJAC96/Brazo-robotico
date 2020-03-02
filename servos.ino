#include <Servo.h>
Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;
Servo servoMotor4;

void setup() {
  servoMotor1.attach(3);
  servoMotor2.attach(5);
  servoMotor3.attach(6);
}

void loop() {
  servoMotor1.write(90);
  servoMotor2.write(110);
  servoMotor3.write(160);
  delay(3000);
  servoMotor3.write(100);
  servoMotor1.write(10);
  delay(3000);
}
