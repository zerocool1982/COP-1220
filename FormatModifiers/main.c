#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%-10d\n", 99); // -10 produces 99 with 10 spaces to the right
    printf("%10d\n", 99); // -10 produces 99 with 10 spaces to the left
    printf("%-+10d\n", 99); // -10 produces 99 with 10 spaces to the left with + in front

    return 0;
}
