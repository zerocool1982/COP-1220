#include <stdio.h>

int main()
{
    char name[20];

    printf("\n\t\tPlease enter your full name: ");
    scanf("%[^\n]", name);

    printf("\n\t\tHello %s\n\n\n", name);

    return 0;
}




