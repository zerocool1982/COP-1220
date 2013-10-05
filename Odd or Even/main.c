#include <stdio.h>
int main()
{

    int num;

    printf("\t\t\t***Odd or Even Calculator***\n\n");

    printf("\t\t\t  Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\n\t\t\t\t\t%d: Even\n", num);
    }
    else
    {
        printf("\n\t\t\t\t\t%d: Odd\n", num);
    }


    return 0;
}
