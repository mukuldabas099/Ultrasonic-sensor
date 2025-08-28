#include "Arduino.h"
#include "ultrasonic.h"

int trigPin = 9;
int echoPin = 10;
long dist() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  while (digitalRead(echoPin) == LOW);
  unsigned long starting = micros();
  while (digitalRead(echoPin) == HIGH);
  unsigned long ending = micros();

  float duration = ending - starting;
  float distance = (duration * 0.034) / 2.0;  
  return distance;
}