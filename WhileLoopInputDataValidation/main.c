#include <stdio.h>
#define TRUE 1


//this will continue to loop back and ask you for a valid number 1 - 12
//and displays and error when an incorrect number is entered

int main()
{
   int month;

   while (TRUE) //this is always true
   {
       printf("\nEnter a month between 1 and 12: ");
       scanf("%d", &month);

       if (month > 1 && month < 12)
        break; //stops the loop

      printf("Error - month you entered is not valid.\n");
   }

   printf("The month accepted is %d.\n", month);

   return 0;
}
