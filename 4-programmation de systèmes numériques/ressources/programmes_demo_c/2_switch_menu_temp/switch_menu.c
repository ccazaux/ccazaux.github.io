// C program to show switch case usage
#include <stdio.h>
 
// Main function
int main()
{
       int character;

       printf ("\
        =Menu======================\n\
        1 : ping flood attack      \n\
        2 : hexdump random file    \n\
        3 : Exit                   \n\
        ===========================\n");
       		  
       character = getchar();
 
       printf("The entered character is : %c\n", character);

       switch (character)
       {
              case  '1' :
              printf("ping flood starting...");
              system("ping 8.8.8.8");
              break;

              case  '2'  : 
              printf("hexdump starting...");
              system ("hexdump /dev/random");
              break;

              case '3'   :
              printf("Goodbye!");
              return 0;
              default:
              printf("unknown command! What are you doing?");
       }
       printf("\n");

       return 0;
}

