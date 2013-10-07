#include <stdio.h>
#define MAXNUMS 5

//this program computes the pos. and neg. sums of a set
//of MAXNUMS user entered numbers

int main()
{
   int i;
   float number, postotal = 0.0f, negtotal = 0.0f;

   for (i = 1; i <= MAXNUMS; i++)
   {
       printf("Enter a number (positive or negative): ");
       scanf("%f", &number);

       if (number > 0)
       {
           postotal += number;
       }
       else
       {
           negtotal += number;
       }
   }

   printf("\nThe positive total is %f", postotal);
   printf("\nThe negative total is %f", negtotal);

   return 0;
}
