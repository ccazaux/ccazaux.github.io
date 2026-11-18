#include <stdio.h>
#include <unistd.h>

#define MAXBAR 40

int main (void)
{
	printf("\rHack is beginning\n");
	system ("whoami;hostname;df -h");

	for (int cpt=0; cpt <MAXBAR; cpt++)
	{
		printf("\rHack will be completed in %02d ",MAXBAR-cpt-1);

		printf("  [");
		for (int progress= 0; progress <=cpt ; progress++)
		{
			printf("=");
		}

        for (int progress= cpt; progress <MAXBAR-1 ; progress++)
        {
                printf(".");
        }
		printf("]");
		fflush(stdout);
		usleep(150000);

	}

	printf("\nHack completed.\nPlease pay 100 Bitcoins at dark@army.mail\nor data will be destroyed. Have a nice day \n");
	return 0;
}
