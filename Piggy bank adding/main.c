/* this program calculates the dollar amount from the piggy bank */

#include <stdio.h>
int main()

{
    float halfDollars;
    float quarters;
    float dimes;
    float nickels;
    float pennies;
    float total;

    halfDollars = 12 * .50;
    quarters = 20 * .25;
    dimes = 32 *.10;
    nickels = 45 * .05;
    pennies = 27 * .01;
    total = halfDollars + quarters + dimes + nickels + pennies;

    printf("The total amount in the piggy bank is %5.2f.\n\n", total);

    return 0;

}
