// LEDS \\

#include <FastLED.h>
#define NUM_LEDS 82
#define DATA_PIN 4
CRGB leds[NUM_LEDS];
//-------------------------
// Sensorler \\

#define sol2 32
#define orta2 34
#define sag2 36

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  pinMode(sol2, INPUT);
  pinMode(orta2, INPUT);
  pinMode(sag2, INPUT);
}

void loop() {

  int sol = digitalRead(sol2);
  int orta = digitalRead(orta2);
  int sag = digitalRead(sag2);


  if (sol == 0 && orta == 0 && sag == 1) {

    for (int i = 35; i >= 0; i--) {
      leds[i] = CRGB(225,70,0);
      FastLED.show();
      delay(10);
    }

    for (int i = 0; i <= 35; i++) {
      leds[i] = CRGB::Black;
      FastLED.show();
      delay(10);
    }

      for (int i = 35; i >= 0; i--) {
      leds[i] = CRGB(225,70,0);
      FastLED.show();
      delay(10);
    }

    for (int i = 0; i <= 35; i++) {
      leds[i] = CRGB::Black;
      FastLED.show();
      delay(10);
    }

  }
  else if (sol == 1 && orta == 0 && sag == 0) {

for (int i = 35; i >= 0; i--) {
      leds[81 - i] = CRGB(225,70,0);
      FastLED.show();
      delay(10);
    }

    for (int i = 0; i <= 35; i++) {
      leds[81 - i] = CRGB::Black;
      FastLED.show();
      delay(10);
    }
   for (int i = 35; i >= 0; i--) {
      leds[81 - i] = CRGB(225,70,0);
      FastLED.show();
      delay(10);
    }

    for (int i = 0; i <= 35; i++) {
      leds[81 - i] = CRGB::Black;
      FastLED.show();
      delay(10);
    }
  }

  else if (sol == 0 && orta == 1 && sag == 0) {

for (int i = 35; i >= 0; i--) {
      leds[i] = CRGB(225,70,0);
      leds[81 - i] = CRGB(225,70,0);
      FastLED.show();
      delay(10);

    }


    for (int i = 0; i <= 35; i++) {
      leds[i] = CRGB::Black;
      leds[81 - i] = CRGB::Black;
      FastLED.show();
      delay(10);
    }

    
for (int i = 35; i >= 0; i--) {
      leds[i] = CRGB(225,70,0);
      leds[81 - i] = CRGB(225,70,0);
      FastLED.show();
      delay(10);

    }


    for (int i = 0; i <= 35; i++) {
      leds[i] = CRGB::Black;
      leds[81 - i] = CRGB::Black;
      FastLED.show();
      delay(10);
    }

    

    /*
      for(int i = 0; i < 36; i++){
       leds[i] = CRGB::Red;
       leds[81 - i] = CRGB::Red;
       FastLED.show();
       delay(50);
      }

      for(int i = 36; i > 0; i--){
       leds[i] = CRGB::Black;
       leds[81 - i] = CRGB::Black;
       FastLED.show();
       delay(50);

    */
  }


  /*
     leds[80] = CRGB::Red;
    leds[1] = CRGB::Red;
    FastLED.show();
    delay(500);

    leds[80] = CRGB::Black;
    leds[1] = CRGB::Black;
    FastLED.show();
    delay(500);

     leds[79] = CRGB::Red;
    leds[2] = CRGB::Red;
    FastLED.show();
    delay(500);

    leds[79] = CRGB::Black;
    leds[2] = CRGB::Black;
    FastLED.show();
    delay(500);

     leds[78] = CRGB::Red;
    leds[3] = CRGB::Red;
    FastLED.show();
    delay(500);

    leds[78] = CRGB::Black;
    leds[3] = CRGB::Black;
    FastLED.show();
    delay(500);

     leds[81] = CRGB::Red;
    leds[0] = CRGB::Red;
    FastLED.show();
    delay(500);

    leds[0] = CRGB::Black;
    leds[81] = CRGB::Black;
    FastLED.show();
    delay(500);*/
}
