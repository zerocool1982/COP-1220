/*
Date: Sep 26 2013

Topic: Nested vs Stack selection structure
*/

#include <stdio.h>

int main()
{
    int numof20s=0, numof10s=0, numof5s=0, numof1s=0;
    int dollarAmt = 92;

    if(dollarAmt >= 20)
    {
       numof20s = dollarAmt / 20;
       dollarAmt = dollarAmt - (numof20s * 20) ;
    }
    if(dollarAmt >= 10)
    {
       numof10s = dollarAmt / 10;
       dollarAmt = dollarAmt - (numof10s * 10);
    }
    if(dollarAmt >= 5)
    {
       numof10s = dollarAmt / 5;
       dollarAmt = dollarAmt - (numof5s * 5);
    }
    numof1s = dollarAmt;


    printf("The number of 20s are: %d", numof20s);
    printf("\nThe number of 10s are: %d", numof10s);
    printf("\nThe number of 5s are: %d", numof5s);
    printf("\nThe number of 1s are: %d", numof1s);

    return 0;
}




/*  if(testScore >= 90)
    {
        printf("You have an A");
    }
    if(testScore > 80)
    {
        printf("Sorry not an B");
    }

    if(testScore >= 90)
    {
        printf("You have an A");
    }
    else
    {
        if(testScore >=80)
        {
            printf("You have a B");
        }

    */
