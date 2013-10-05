#include <stdio.h>
#include <math.h>
#define SQFTPERQUART 200.0
#define PI 3.1416

int main()
{
    float width, outerRadius, innerRadius;
    float totalArea, innerArea, outerRimArea;
    float blue, red;

    /* get the input data */
    printf("Enter the width of the display (in feet): ");
    scanf("%f", &width);

    /* generate the input data */
    outerRadius = width / 2;
    innerRadius = 0.25 * outerRadius;

    /* determine the two areas */
    totalArea = PI * pow(outerRadius, 2);
    innerArea = PI * pow(innerRadius, 2);
    outerRimArea = totalArea - innerArea;

    /* determine the gallons of paint needed */
    red = innerArea / SQFTPERQUART;
    blue = outerRimArea / SQFTPERQUART;

    /* provide the required outputs */
    printf("\nThe inner area is %5.2f sq. feet.", innerArea);
    printf("\nThe outer rim area is %5.2f sq. feet.", outerRimArea);
    printf("\n\nRed paint required is %6.3f quarts.", red);
    printf("\nBlue paint required is %6.3f quarts.", blue);

    return 0;
}
