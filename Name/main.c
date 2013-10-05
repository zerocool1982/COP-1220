#include <stdio.h>

int main()
{
    char fname[20], mname [20], lname [20];

    printf("\n\t\tPlease enter your full name: ");
    scanf("%s %s %s", fname, mname, lname);

    printf("\n\t\tHello %s %s %s\n\n\n", fname, mname, lname);

    return 0;
}
