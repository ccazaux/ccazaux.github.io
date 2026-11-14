//test I²C
#include <Wire.h> // pour afficheur LCD
#include "rgb_lcd.h" // pour afficheur LCD

rgb_lcd lcd;

void setup() {
    lcd.begin(16, 2);  // set up the LCD's number of columns and rows:
    lcd.setRGB(255, 255, 255); // rétro-éclairage blanc
}

void loop()
{
    //lcd.setCursor(0, 0); // Première colone, première ligne
    lcd.print("A"); // caractère de test entre "" > code Hexadécimal
    delay(100);
}







