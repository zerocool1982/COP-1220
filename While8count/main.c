#include <stdio.h>
#define MAXCOUNT 4
int main()
{
    int count;
    float num;

    printf("\nThis program will ask you to enter %d numbers.\n\n", MAXCOUNT);

    count = 1;
    while (count <= MAXCOUNT)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        printf("The number entered is %f\n", num);
        count++;
    }

    return 0;
}
