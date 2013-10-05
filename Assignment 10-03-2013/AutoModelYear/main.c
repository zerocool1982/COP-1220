/*
Name: Joshua Reynolds
Date: 10/04/2013

Description: Accepts year and weight from the user
and displays the weight class number and the registration fee.
*/

#include <stdio.h>
#define WC1 16.50
#define WC2 25.50
#define WC3 46.50
#define WC4 27.00
#define WC5 30.50
#define WC6 52.50
#define WC7 35.50
#define WC8 65.50

int main()
{
    int year, weight, weightClass;
    float fee;

    printf("\t\tThis program accepts year and weight of the vehicle\n\t\tand displays the weight class and registration fee.\n\n");

    printf("\t\tEnter the year of the vehicle: ");
    scanf("%d", &year);

    printf("\n\t\tEnter the weight of the vehicle: ");
    scanf("%d", &weight);

    if (year <= 1970 && weight < 2700)
    {
        weightClass = 1;
        fee = WC1;
    }
        else
        {
            if (year <= 1970 && weight <= 3800)
            {
                weightClass = 2;
                fee = WC2;
            }
            else
            {
                if (year <= 1970 && weight > 3800)
                {
                    weightClass = 3;
                    fee = WC3;
                }
                else
                {
                    if (year <= 1979 && weight < 2700)
                    {
                        weightClass = 4;
                        fee = WC4;
                    }
                    else
                    {
                        if (year <= 1979 && weight <= 3800)
                        {
                            weightClass = 5;
                            fee = WC5;
                        }
                        else
                        {
                            if (year <= 1979 && weight > 3800)
                            {
                                weightClass = 6;
                                fee = WC6;
                            }
                            else
                            {
                                if (year >= 1980 && weight < 3500)
                                {
                                    weightClass = 7;
                                    fee = WC7;
                                }
                                else
                                {
                                    if (year >= 1980 && weight >= 3500)
                                    {
                                        weightClass = 8;
                                        fee = WC8;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        printf("\n\nYour weight class number is %d and registration fee is $%2.2f\n\n", weightClass, fee);

        return 0;
}


