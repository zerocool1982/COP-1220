#include <stdio.h>
#include <math.h>
int main()
{
    float usenum;

    printf("This program calculates the square root and\n");
    printf("reciprocal (1/number) of a number\n");
    printf("\nPlease enter a number: ");
    scanf("%f", &usenum);

    if (usenum < 0.0)
        printf("The square root of a negative number does not exist.\n");
    else
        printf("The square root of %f is %f.\n", usenum, sqrt(usenum));

    if (usenum == 0.0)
        printf("The reciprocal of zero does not exist.\n");
    else
        printf("The reciprocal of %f is %f.\n", usenum, 1/usenum);

    getchar();

    return 0;
}
