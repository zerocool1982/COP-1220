#include <stdio.h>
#define TABLESIZE 10

int main()
{
    int num;

    printf("NUMBER SQUARE CUBE\n");
    printf("------ ------ ----\n");

    for (num = 1; num <= TABLESIZE; num++)
    {
        printf("%3d %7d %6d\n", num, num*num, num*num*num);
    }

    return 0;
}
