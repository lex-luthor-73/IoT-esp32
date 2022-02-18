#include <Arduino.h>

#define BAUD_RATE 115200
#define INPUT_PIN 4
#define OUTPUT_PIN 5

void setup(){
    // Initiate communication.
    Serial.begin(BAUD_RATE);

    // Assign Pin Modes.
    pinMode(INPUT_PIN, INPUT_PULLUP);
    pinMode(OUTPUT_PIN, OUTPUT);

    digitalWrite(OUTPUT_PIN, LOW);
}

void loop(){
    if(digitalRead(INPUT_PIN) == HIGH){
        digitalWrite(OUTPUT_PIN, LOW);
    }else{
        digitalWrite(OUTPUT_PIN, HIGH);
    }
}