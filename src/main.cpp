#include <Arduino.h>
#include "FastLED.h"
// wheel 1: 47 wheel 2: ?47?
#define NUM_LEDS 47+47
#define DATA_PIN 11
#define CLOCK_PIN 12
CRGB leds[NUM_LEDS];

void setup() {
  delay(2000);
  FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  CRGB randHue;
  randHue.red = 200+ random(16);
  randHue.green = 64+ random(16);
  randHue.blue = 200+ random(16);
  for (int i = 0; i < NUM_LEDS; i ++) {
    // leds[i] = CRGB::Coral;
    leds[i] = randHue;
    // delay(10);
    // leds[i] = CRGB::Black;
  }
  delay(100);
    FastLED.show();
  // put your main code here, to run repeatedly:
}