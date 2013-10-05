/*
Name: Joshua Reynolds
Date: 10/04/2013

Description: Accepts year from the user and
displays if that year is a leap year or not.

*/




#include <stdio.h>
int main()
{
    int year;

    printf("This program determines if the year input by the user was a leap year");

    printf("\n\nPlease enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("\n%d is a leap year.\n", year);
    }
        else
        {
            if (year % 4 == 0)
            {
                printf("\n%d is a leap year.\n\n", year);
            }
            else
            {
                if (year % 100 == 0)
                {
                    printf("\n%d is not a leap year.\n\n", year);
                }
                else
                {
                    printf("\n%d is not a leap year.\n\n", year);
                }
            }
        }

    return 0;
}
