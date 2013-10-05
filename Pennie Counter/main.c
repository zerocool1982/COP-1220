#include <stdio.h>

int main()
{
    int pennies;
    int dollars;

    printf("Enter dollar amount: ");
    scanf("%d", &dollars);

    pennies = dollars * 100;

    printf("\n\nThere are %d pennies in $%d dollars.", pennies, dollars);


    return 0;
}
