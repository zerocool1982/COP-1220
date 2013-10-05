#include <stdio.h>
#define PI 3.1416
int main()
{
    float radius, circum;

    printf("\nEnter a radius: ");
    scanf("%f", &radius);
    circum = 2.0 * PI * radius;
    printf("\nThe circumference of the circle is %f", circum);

    return 0;
}
