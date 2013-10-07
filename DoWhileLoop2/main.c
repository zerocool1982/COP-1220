#include <stdio.h>
#define SENTINEL 0.0
#define RATE .06

int main()
{
    float price, salestax;
    do
    {
        printf("\nEnter a price or -1 to terminate: ");
        scanf("%f", &price);

        if (price < SENTINEL)
        break;

        salestax = RATE * price;
        printf("The sales tax is $%5.2f", salestax);

    }   while (price > SENTINEL);

    return 0;
}
