#include <Arduino.h>

bool state = HIGH;

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_BUILTIN, state);
    delay(1000);
    state = !state;
}