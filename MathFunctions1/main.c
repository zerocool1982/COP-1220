#include <stdio.h>
#include <math.h>
int main()
{
    double result;

    printf("The square root of 6.456 is %f\n", sqrt(6.456));
    printf("7.6 raised to the 3rd power is %f\n", pow(7.6,3));

    result = fabs(-8.24);
    printf("The absolute value of -8.24 is %f\n", result);

    return 0;
}
/* valid expressions as arguments
    sqrt(4.0 + 5.3 + 4.0)
    sqrt(x)
    pow(y,z)
    fabs(2.3 * alpha)
    fabs(theta - phi)

    also are valid:

    x = 3.0 * sqrt(5 * 33 - 13.91) / 5;
    y = 3.0 * log(30 * .514)/ pow(2.4, 3);

*/
