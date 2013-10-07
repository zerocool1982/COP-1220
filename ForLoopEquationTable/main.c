#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;

    printf("x value   y value\n");
    printf("-------   -------\n");

    for (x=2; x <= 6; x++)
    {
        y = 10 * pow(x,2) + x - 2;
        printf("%4d %10d\n", x, y);
    }

    return 0;
}
