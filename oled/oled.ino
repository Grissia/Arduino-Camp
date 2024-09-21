#include <Adafruit_GFX.h>
#include <Adafruit_GrayOLED.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <Adafruit_SSD1306.h>
#include <splash.h>

int Height = 64, Width = 128, Reset = -1;
int x = 5, y = 10;
Adafruit_SSD1306 oled(Width, Height, &Wire, Reset);

void setup() {
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.clearDisplay();
}

void loop() {
  oled.writePixel(x,y,1);
  oled.display();
}
