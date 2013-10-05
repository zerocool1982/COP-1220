//This program converts miles to feet

#include <stdio.h>
int main()
{
    float miles = 2.36;
    float conv = 5280 * miles;

    printf("There are %5.2f feet in %5.2f miles.\n\n", conv, miles);

    return 0;

}
