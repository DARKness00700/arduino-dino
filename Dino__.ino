#include <Servo.h>
Servo yeet;
int x;

void setup() {
  yeet.attach (7);
  Serial.begin(9600);
  pinMode(A0, INPUT);
  for (int i = 0; i < 100; i++) {
    x = x + Serial.println(analogRead(A0));
  }
  x = x / 99;
  x = x + 200;
}
void loop() {
  Serial.println(analogRead(A0));
  if (analogRead(A0) < x) {
    delay(20);
    yeet.write (75);
    delay(120);

    yeet.write(90);
    delay(40);




  }
}
