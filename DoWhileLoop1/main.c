#include <stdio.h>

int main()
{
    int num, sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        sum = sum + num;
    }
    while (num != 0);

    printf("\nThe sum of all the numbers = %d", sum);




    return 0;
}
