#include <stdio.h>
int main()
{
    int num = 22;

    printf("The value stored in num is %d.", num);
    printf("\nThe computer uses %d bytes to store this value.\n", sizeof(int));
    printf("num = %d The address of num is %d\n.", num, &num);

    return 0;
}
