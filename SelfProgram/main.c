#include <stdio.h>
int main()
{
    char answer;

    printf("Are you cool? Enter y or n: ");
    scanf("%c", &answer);

    if (answer == 'y')
        printf("\n\nYou are so vain. You sicken me!!!\n\n");

    else
        printf("\n\nYou need more confidence!!!\n\n");

    return 0;

}
