#include <Arduino.h>

#define PIN_RELAY 13



void setup() {
  pinMode(PIN_RELAY, OUTPUT);
}

void loop() {
  digitalWrite(PIN_RELAY, 0);
  delay(2000);
  digitalWrite(PIN_RELAY, 1);
  delay(2000);
}

//RELAY AKTIV LOW