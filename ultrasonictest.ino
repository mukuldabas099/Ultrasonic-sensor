#include "ultrasonic.h"
//`#include "Arduino.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long total_distance = dist();
  Serial.print("Distance: ");
  Serial.print(total_distance);
  Serial.println();
  delay(100);
}