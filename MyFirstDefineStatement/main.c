#include <stdio.h>
#define SALESTAX 0.05
int main()
{
    float amount, taxes, total;

    printf("\nEnter the amount purchased: ");
    scanf("%f", &amount);
    taxes = SALESTAX * amount;
    total = amount + taxes;
    printf("The sales tax is $%4.2f",taxes);
    printf("\nThe total bill is $%5.2f\n", total);

    return 0;

}
