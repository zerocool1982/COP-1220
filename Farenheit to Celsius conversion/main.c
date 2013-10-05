/* Convert fahrenheit temperature to celsius */

#include <stdio.h>
int main ()
{
    float fahrenheit;
    float celsius;

    fahrenheit = 75;
    celsius = 5.0/9.0 * (fahrenheit - 32);
    printf("The celsius equivalent to %5.2f in fahrenheit", fahrenheit);
    printf("is %5.2f degrees.\n\n\n", celsius);

    return 0;
}
