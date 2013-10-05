#include <stdio.h>
#define LOWRATE 0.02 // lower tax rate
#define HIGHRATE 0.025 // higher tax rate
#define CUTOFF 20000.0 // cut off for low rate
#define FIXEDAMT 400 // fixed dollar amount for higher rate amounts

int main()
{
    float taxable, taxes;

    printf ("Please type in the taxable income: ");
    scanf("%f", &taxable);

    if (taxable <= CUTOFF)
        taxes = LOWRATE * taxable;
    else
        taxes = HIGHRATE * (taxable - CUTOFF) + FIXEDAMT;

    printf("Taxes are $%7.2f\n", taxes);

    return 0;
}
