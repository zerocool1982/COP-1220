/*
Name: Josh Reynolds
Date: Sept. 11th 2013
Description: This program will accept input from
the user and calculate the miles per gallon
*/

#include <stdio.h>
int main()
{
    float miles, gallons, mpg;
    printf("\t*****This program will calculate your miles per gallon*****\n\n");

    printf("\t\t\tEnter the miles driven: ");
    scanf("%f", &miles);
    printf("\t\t\tEnter the gallons of gas used: ");
    scanf("%f", &gallons);
    mpg = miles / gallons;

    printf("\n\t\tWith %.2f gallons of gas and %.2f miles driven\n\t\tyour miles per gallon is:  %.2f.\n\n", miles, gallons, mpg);

    return 0;
}
