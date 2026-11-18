#include <stdio.h>

int main (void)
{
    printf("ping of death test");
    pingN(30);
    return 0;
}

void pingN(int nbPing )
{
    for (int cpt=0 ; cpt<nbPing ; cpt++ )
    {
    system("ping -c 1 127.0.0.1");
    }
}
    
