#include <stdio.h>

int main (void)
{

	while (1)
	{
		printf("do ping flood!\n");
		system("ping  127.0.0.1");
		//sleep (1);
	}

}
