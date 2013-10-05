/*
Name: Josh Reynolds
Date: Sept. 11th 2013
Description: This program will accept input from
the user and calculate the volume of a pool
*/

#include <stdio.h>
int main()
{
    float length, width, avgDpth, volume;
    printf("\t***This program will calculate the volume of a pool***\n\n");

    printf("\n\t\tEnter the length of the pool: ");
    scanf("%f", &length);
    printf("\n\t\tEnter the width of the swimming pool: ");
    scanf("%f", &width);
    printf("\n\t\tEnter the average depth of the swimming pool: ");
    scanf("%f", &avgDpth);
    volume = length * width * avgDpth;

    printf("\n\t\tThe volume of the swimming pool is %.2fcuft. \n\n", volume);

    return 0;
}
