#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;

    printf("This program calculates the area of a triangle.");

    printf("\n\nPlease enter the smallest side of the triangle: ");
    scanf("%f", &a);

    printf("\nPlease enter the next higher side of the triangle: ");
    scanf("%f", &b);

    printf("\nPlease enter the largest side of the triangle: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    if(s <= 0)
    {
        printf("\n\nError!!! Sides cannot be equal to 0 or a negative number!!!\n\n");
    }

      else
            {
                if ((a + b) < c)
                {
                    printf("\n\nError!!! The combined smallest sides cannot\nbe less than that of the largest side!!!\n\n");
                }
                else
                {
                    if (area == 0.0)
                    {
                         printf("\n\nError!!! Mesurements entered equal a straight line!!!\n\n");
                    }
                    else
                    {
                        if (a || b > c)
                        {
                            printf("\n\nThe first two sides entered cannot be larger than the largest side\n\n");
                        }
                        else
                        {
                             printf("\n\nThe area of the triangle with sides\n%4.2f, %4.2f and %4.2f is equal to: %5.3f\n\n", a, b, c, area);

                        }
                    }
                }
            }

    return 0;
}
