#include <stdio.h>
#define MAXCOUNT 4
int main()
{
    int count;
    float num, total;

    printf("\nThis program will ask you to enter %d numbers.\n\n", MAXCOUNT);

    count = 1;
    total = 0.0;

    while (count <= MAXCOUNT)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        total += num;
        printf("The total is now %.2f\n", total);
        count++;
    }
    printf("\n\nThe final total of the %d numbers is %.2f\n", MAXCOUNT, total);

    return 0;
}
