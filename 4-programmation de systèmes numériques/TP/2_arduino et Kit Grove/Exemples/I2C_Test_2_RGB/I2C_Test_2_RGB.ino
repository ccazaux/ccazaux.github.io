//test I²C
#include <Wire.h> // pour afficheur LCD
#include "rgb_lcd.h" // pour afficheur LCD

rgb_lcd lcd;
int RGB = 0; // variable contenant soit : 0 pour Rouge - 1 pour Vert - 2 pour Bleu

void setup() {
    lcd.begin(16, 2);  // set up the LCD's number of columns and rows:
    //lcd.setRGB(255, 255, 255); // rétro-éclairage blanc
}

void loop()
{
    switch (RGB)
    {
      case 1 :
        lcd.setRGB(0, 255, 0); // rétro-éclairage vert
        RGB=2;  // pour la prochaine fois...
        break;
      
      case 2 :
        lcd.setRGB(0, 0, 255); // rétro-éclairage bleu
        RGB=0;  // pour la prochaine fois...
        break;

      default :
        lcd.setRGB(255, 0, 0); // rétro-éclairage rouge
        RGB=1;  // pour la prochaine fois...
        break;
    }
    delay(5000);
}







