#include <Arduino.h>

// Adjust these if your board uses a different LED pin or delay.
constexpr uint8_t LED_PIN = LED_BUILTIN;
constexpr uint16_t BLINK_DELAY_MS = 500;

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(BLINK_DELAY_MS);

    digitalWrite(LED_PIN, LOW);
    delay(BLINK_DELAY_MS);
}
