#include <stdio.h>
#include <time.h>

//int iTemperature = 38;

int main(void) 
{  
  for (int iTemperature=38; iTemperature < 130; iTemperature=iTemperature+10)
  {
   // iTemperature = iTemperature +5;
    printf("La température CPU est de %d°.\n",iTemperature);
    usleep(100000);
  }

  for (int cpt=5; cpt >= 0; cpt=cpt-1)
  {
    printf("A L'AIDE!\n");
    usleep(cpt*100000);
  }
  printf("ARRG!");

  return 0;
}
