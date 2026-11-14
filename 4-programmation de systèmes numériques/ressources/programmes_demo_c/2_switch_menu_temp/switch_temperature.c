#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int iTemperature = 38;

int main(void) 
{
  printf("?\n");
  scanf("%d", &iTemperature);
  switch (iTemperature) {
  case 37:
    printf("Vous etes en forme\n");
    break;
  case 38:
    printf("Vous etes un peu malade\n");
    break;
  case 39:
    printf("Vous etes tres malade\n");
    break;
  default:
    printf("Erreur système : temperature non humaine\n");
  }

  return 0;
}
