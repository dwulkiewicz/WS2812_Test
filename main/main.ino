#include <Adafruit_NeoPixel.h>

#define PIN 6
#define LICZBADIOD 8
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LICZBADIOD, PIN, NEO_GRB + NEO_KHZ800);

void setup() 
{
    strip.begin();
    strip.show(); // Initialize all pixels to 'off'
    pinMode(13, OUTPUT);    
}

void loop() 
{
    //digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    //delay(1000);              // wait for a second
    //digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    //delay(1000);              // wait for a second

  for(int i=0; i<LICZBADIOD; i++)
  {
    strip.setPixelColor(i, 255, 0, 0); // Dioda "i" oraz skladowe R=255 G=0 B=0
    strip.show(); // Wysylamy dane do lancucha
    delay(50); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }

  for(int i=LICZBADIOD; i>=0; i--)
  {
    strip.setPixelColor(i, 0, 255, 0); // Dioda "i" oraz skladowe R=0 G=255 B=0
    strip.show(); // Wysylamy dane do lancucha
    delay(50); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }

  for(int i=0; i<LICZBADIOD; i++)
  {
    strip.setPixelColor(i, 0, 0, 255); // Dioda "i" oraz skladowe R=0 G=0 B=255
    strip.show(); // Wysylamy dane do lancucha
    delay(50); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }  

  for(int i=LICZBADIOD; i>=0; i--)
  {
    strip.setPixelColor(i, 255, 255, 0); // Dioda "i" oraz skladowe R=0 G=255 B=0
    strip.show(); // Wysylamy dane do lancucha
    delay(50); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }

  for(int i=0; i<LICZBADIOD; i++)
  {
    strip.setPixelColor(i, 0, 255, 255); // Dioda "i" oraz skladowe R=0 G=0 B=255
    strip.show(); // Wysylamy dane do lancucha
    delay(50); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }  

  for(int i=LICZBADIOD; i>=0; i--)
  {
    strip.setPixelColor(i, 255, 0, 255); // Dioda "i" oraz skladowe R=0 G=255 B=0
    strip.show(); // Wysylamy dane do lancucha
    delay(50); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }  
   
}
