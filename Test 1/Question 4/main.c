#include <stdio.h>
#define QUARTVALUE .25
#define DIMEVALUE .10
#define NICKELVALUE .05
#define PENNIESVALUE .01
#define TEMPAMT 1

int main()
{
   int quarts, dimes, nickels, pen, totalDollars;
   float totalAmt, totalCents;
    printf("This program will total the coins that you enter.\n\n");
    printf("\nInput how many quarters: ");
    scanf("%d", &quarts);
    printf("\nInput how many dimes: ");
    scanf("%d", &dimes);
    printf("\nInput how many nickels: ");
    scanf("%d", &nickels);
    printf("\nInput how many pennies: ");
    scanf("%d", &pen);

    totalAmt = (quarts * QUARTVALUE) + (dimes * DIMEVALUE) + (nickels * NICKELVALUE) + (pen * PENNIESVALUE);
    totalDollars = totalAmt / TEMPAMT;
    totalCents = (totalAmt - totalDollars) * 100;

    printf("\n\nYour coins are worth %d dollars and %2.0f cents\n\n", totalDollars, totalCents);

    return 0;

}
