/* this program converts coins to Dollar Amount
Total the Change Your Pocket
Name: Joshua Reynolds
Date 09/05/2013 */

#include <stdio.h>
#define QVALUE .25
#define DIMEVALUE .10
#define NICKVALUE .05
#define PENVALUE .01
int main()

{
    int qu, dimes, nickels, pen; //declare half-dollars, quarters, dimes, nickels, pennies
    double total;
    printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("\t\t$$$$$$$$$$   Pocket Coin Converter   $$$$$$$$$$\n");
    printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");

    /* Input each coin amount */
    printf("\t\t  Please input how many quarters: ");
    scanf("%d", &qu);
    printf("\t\t  Please input how many dimes: ");
    scanf("%d", &dimes);
    printf("\t\t  Please input how many nickels: ");
    scanf("%d", &nickels);
    printf("\t\t  Please input how many pennies: ");
    scanf("%d", &pen);

    total = (qu * QVALUE) + (dimes * DIMEVALUE) + (nickels * NICKVALUE) + (pen * PENVALUE);

    printf("\n\n\t\t  You have $%4.2f in your pocket!!!\n\n", total); // Print total amount of coins in bank

    puts("\t\t     Press enter key to exit");
    getchar();
    getchar();

    return 0;

}
