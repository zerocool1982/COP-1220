#include <stdio.h>
int main()
{
   printf("Welcome to your Miles to Feet converter!");

   float miles;

   printf("\n\nPlease input how many miles to convert: ");
   scanf("%f", &miles);

   float feet = miles * 5280;

   printf("In %5.2f mile/s there are %5.2f feet.\n\n", miles, feet);

   puts("Press enter key to end");
   getchar();
   getchar();

   return 0;


}
