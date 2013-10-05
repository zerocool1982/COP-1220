/*
Name: Josh Reynolds
Date: Sept. 13th 2013
Description: This program compares two numbers and tells which is greater, lesser or equal
*/


#include <stdio.h>

int main()
{
    int fstnum, secnum;
    printf("\t\t\t\t*********************\n");
    printf("\t\t\t\t***Number Comparer***\n");
    printf("\t\t\t\t*********************\n\n");
    printf("\t\t\tThis program compares two numbers\n\t\t\tand tells you which is larger\n\n");

    printf("\t\t\tPlease enter the first number: ");
    scanf("%d", &fstnum);
    printf("\n\t\t\tPlease enter the second number: ");
    scanf("%d", &secnum);

    if (fstnum > secnum)
        printf("\n\n\t\t\tThe first number is greater\n\n");
    else if (secnum == fstnum)
        printf("\n\n\t\t\tThe numbers are equal\n\n");
    else
        printf("\n\n\t\t\tThe second number is greater\n\n");
return 0;
}
