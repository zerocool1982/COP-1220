#include <stdio.h>
int main()
{
    float miles, gallons; // declare miles and gallons of gas

    printf("Enter the miles driven: ");
    scanf("%f", &miles);
    printf("Enter the gallons of gas used: ");
    scanf("%f", &gallons);

    float mpg;
    mpg = miles / gallons;
    printf("The miles per gallon is %f", mpg);

    return 0;
}
