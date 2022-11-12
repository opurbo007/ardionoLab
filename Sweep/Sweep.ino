#include <Servo.h>

Servo myservo, myservo2, myservo3;
int pos = 0;

void setup() {
  myservo.attach(9);
  myservo2.attach(11);
  myservo3.attach(10);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {

    // myservo.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    // delay(7);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(5);
  }
  for (pos = 0; pos <= 180; pos += 1) {

    myservo.write(pos);
    //  delay(7);
  }

  for (pos = 180; pos >= 0; pos -= 1) {
    // myservo.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    delay(5);
  }
}