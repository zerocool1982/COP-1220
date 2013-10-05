#include <stdio.h>
int main()
{
    char ch1, ch2, ch3;

    printf("Insert three characters: ");
    scanf("%c %c %c", &ch1, &ch2, &ch3);
    printf("\n\nYou typed %c%c%c.\n\n\n", ch1, ch2, ch3);

    return 0;
}
