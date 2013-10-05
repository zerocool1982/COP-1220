#include <stdio.h>
#define MAXVALUE 10000000000
int main()
{
    int pennies, dollars, total, count;
    pennies = 0;
    count = 15;
    total = 0;

    printf("Enter the amount of dollars to be calculated: ");
    scanf("%d", &dollars);

    while (dollars <= MAXVALUE)
    {
        pennies = dollars / 100;
        total += pennies;
        count++;

    }
    printf("There are %d pennies in %d dollars.", pennies, dollars);

    return 0;
}
