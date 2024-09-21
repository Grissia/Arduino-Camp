void agent() {
    oled.clearDisplay();
    oled.setCursor(32, 10);
    oled.setTextColor(WHITE);
    oled.setTextSize(2);
    oled.println("Agent");
    oled.setCursor(18, 30);
    oled.println("Galahad");
    oled.display();
}

void access() {
    oled.clearDisplay();
    oled.setCursor(30, 10);
    oled.setTextColor(WHITE);
    oled.setTextSize(2);
    oled.println("Access");
    oled.setCursor(23, 30);
    oled.println("Granted");
    oled.display();
}

void press() {
    oled.clearDisplay();
    oled.setCursor(34, 10);
    oled.setTextColor(WHITE);
    oled.setTextSize(2);
    oled.println("Press");
    oled.setCursor(5, 30);
    oled.println("the button");
    oled.display();
}

void shuffle(){
  for(int i = 0; i<=64 ; i++){
    oled.drawLine(i, 0, i, 64, 1);
    oled.drawLine(128-i, 0, 128-i, 64, 1);
    oled.display();
  }
  delay(500);
  for(int i = 0; i<=64 ; i++){
    oled.drawLine(64-i, 0, 64-i, 64, 0);
    oled.drawLine(64+i, 0, 64+i, 64, 0);
    oled.display();
  }
  delay(500);
}