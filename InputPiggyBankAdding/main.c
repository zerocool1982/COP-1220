/* this program converts coins to Dollar Amount
Total the Change Your Pocket
Name: Joshua Reynolds
Date 09/05/2013 */

#include <stdio.h>
int main()

{
    int hD, qu, dimes, nickels, pen; //declare half-dollars, quarters, dimes, nickels, pennies
    float hdAmt, quAmt, dimAmt, nickAmt, penAmt, total; /* Declare coin amounts and formulas */

    printf("\t\t$$$$$$$$$$Pocket Coin Converter$$$$$$$$$$\n\n");
    /* Input each coin amount */
    printf("\t\t  Please input how many half-dollars: ");
    scanf("%d", &hD);
    printf("\t\t  Please input how many quarters: ");
    scanf("%d", &qu);
    printf("\t\t  Please input how many dimes: ");
    scanf("%d", &dimes);
    printf("\t\t  Please input how many nickels: ");
    scanf("%d", &nickels);
    printf("\t\t  Please input how many pennies: ");
    scanf("%d", &pen);

    hdAmt = hD * .50;
    quAmt = qu * .25;
    dimAmt = dimes * .10;
    nickAmt = nickels * .05;
    penAmt = pen * .01;
    total = hdAmt + quAmt + dimAmt + nickAmt + penAmt;

    printf("\n\n\t\t  You have $%4.2f in your pocket!!!\n\n", total); // Print total amount of coins in bank

    puts("\t\t     Press enter key to exit");
    getchar();
    getchar();

    return 0;

}
