#include <stdio.h>
#define PRIME 0.08
int main()
{
    float interest, amount;
    printf("\nEnter the amount: ");
    scanf("%f", &amount);
    interest = PRIME * amount;
    printf("\nThe interest earned is %5.2f dollars", interest);

    return 0;
}
