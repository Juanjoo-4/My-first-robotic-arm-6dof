#include <Servo.h>

Servo miServo;
int position = 90;

const int pinJoystickX = A0;
const int pinButton = 7;
const int pinServo = 9;

void setup() {
  Serial.begin(9600); // Start the monitor serie to view data on the PC
  miServo.attach(pinServo);
  pinMode(pinButton, INPUT_PULLUP);
  miServo.write(position);
}

void loop() {
  if (digitalRead(pinButton) == LOW) {
    position = 90;
    miServo.write(position);
    delay(300);
  }

  int readX = analogRead(pinJoystickX);

  // Displays the joystick reading and the current angle on the screen
  Serial.print("Joystick Reading: ");
  Serial.print(readX);
  Serial.print(" | Angle Servo: ");
  Serial.println(position);

  if (readX < 400 && position > 0) {
    position -= 1;
    miServo.write(position);
    delay(15); 
  }
  else if (readX > 600 && position < 180) {
    position += 1;
    miServo.write(position);
    delay(15);
  }
}
