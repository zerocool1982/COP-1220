/*
Name: Josh Reynolds
Date: Sept. 13th 2013
Description: This program calculates weekly salary
*/


#include <stdio.h>

int main()
{
float hrsWrkd, wklySal;
printf("\t\t\t****************************");
printf("\n\t\t\t**Weekly Salary Calculator**");
printf("\n\t\t\t****************************");
printf("\n\n\t\t\tEnter hours worked: ");
scanf("%f", &hrsWrkd);

if (hrsWrkd <= 40.00)
    wklySal = hrsWrkd * 8.00;
else
    wklySal = 320.00 + ((hrsWrkd - 40) * 12);

printf("\n\n\t\t\tYou weekly salary is $%5.2f\n\n\n", wklySal);

return 0;

}
