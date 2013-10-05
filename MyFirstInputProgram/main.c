/*
Name: Josh Reynolds
Date: Sept. 5th 2013
Description:
This program will accept data in miles from the user and convert to kilometeres
*/

//preprocessor directive

#include <stdio.h>

//defind constants

#define MILES_KMS_CONV 1.6

//begin main function
int main()
{
    //declaration
    int kms, miles;

    printf("\t\t***********MILES to  KMS Converter***********\n");
    printf("The program will accept distance in miles \nand convert it to kilometers\n");

    printf("\n\n\tEnter distance in miles: ");
    scanf("%d", &miles);

    //calculations
    kms = miles * MILES_KMS_CONV;

    printf("You entered %d miles. The distance in kilometeres is : %d", miles, kms);
    return 0;
}
