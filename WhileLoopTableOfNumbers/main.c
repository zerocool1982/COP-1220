#include <stdio.h>
int main()
{
    #define TABLESIZE 10
    int num;

    printf("NUMBER SQUARE CUBE\n");
    printf("------ ------ ----\n");
    num = 1;
    while (num <= TABLESIZE)
    {
        printf("%3d %7d %6d\n", num, num*num, num*num*num);

        num++; //add 1 to num
    }

    return 0;
}
