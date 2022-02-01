#include <Arduino.h>

void setup() {
  // Setting the baud rate.
  Serial.begin(115200);
}

void loop() {
  // printing hello world.
  Serial.println("Hello World!");
}