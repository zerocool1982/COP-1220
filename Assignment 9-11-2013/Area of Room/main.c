/*
Name: Josh Reynolds
Date: Sept. 11th 2013
Description: This program will accept input from
the user and calculate the area of a room
*/

#include <stdio.h>
int main()
{
    float length, width, area;
    printf("****This program calculates the area of a room****\n\n");
    printf("\nEnter the length of the room: ");
    scanf("%f", &length);
    printf("\nEnter the width of the room: ");
    scanf("%f", &width);
    area = length * width;

    printf("\nThe area of the rectangle is %.2fsqft.\n\n", area);

    return 0;
}
