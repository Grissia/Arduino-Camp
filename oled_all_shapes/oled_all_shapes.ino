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
  oled.setTextSize(4);
  oled.setTextColor(WHITE);
  Serial.begin(9600);
}

void loop() {
  /*
  oled.clearDisplay();
  oled.drawCircle(64, 32, 20, 1);
  oled.drawCircle(40, 32, 15, 1);
  oled.drawCircle(90, 32, 15, 1);
  oled.drawLine(10, 32, 118, 32, 1);
  oled.display();
  */

  oled.clearDisplay();
  oled.drawCircle(64, 32, 25, 1);
  oled.drawLine(41, 41, 88, 41, 1);
  oled.drawLine(41, 22, 64, 41, 1);
  oled.drawLine(87, 22, 64, 41, 1);
  oled.display();
  //km
  
}
