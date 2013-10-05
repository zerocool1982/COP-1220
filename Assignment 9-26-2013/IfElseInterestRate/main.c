/*
Date: 9/26/2013

Name: Joshua Reynolds

Program that gives you the interest rate depending on the year(s) input by the user

I used float, so the the user can input fractions of a year like .5.

*/

#include <stdio.h>

#define RANGE_FIVE 5
#define PERCENT_FIVE .045

#define RANGE_FOUR 4
#define PERCENT_FOUR .04

#define RANGE_THREE 3
#define PERCENT_THREE .035

#define RANGE_TWO 2
#define PERCENT_TWO .03

#define RANGE_ONE 1
#define PERCENT_ONE .025

#define PERCENT_ZERO .02

int main()
{
float tempInterest, time;

printf("\n\n\t\tThis program determines the interest rate in a bank\n\t\tby the amount of time money is left in bank");

printf("\n\n\n\t\t   Enter time (in years) on deposit: ");
scanf("%f", &time);

if (time >= RANGE_FIVE)
{
    tempInterest = PERCENT_FIVE;
}
    else
    {
        if (time >= RANGE_FOUR)
        {
            tempInterest = PERCENT_FOUR;
        }
        else
        {
            if (time >= RANGE_THREE)
            {
                tempInterest = PERCENT_THREE;
            }

            else
            {
                if (time >= RANGE_TWO)
                {
                    tempInterest = PERCENT_TWO;
                }
                else
                {
                    if (time >= RANGE_ONE)
                    {
                        tempInterest = PERCENT_ONE;
                    }
                    else
                        tempInterest = PERCENT_ZERO;
                }
            }
        }
    }

    printf("\n\n\n\t\tThe interest rate for %.2f year(s) is %.3f.\n\n\n\n\n", time, tempInterest);

    return 0;

}


