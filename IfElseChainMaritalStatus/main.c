#include <stdio.h>
int main()
{
    char marcode;

    printf("Enter the marital code (S,M,D, or W): ");
    scanf("%c", &marcode);

    if (marcode == 'M')
        printf("\nIndividual is married.\n");
    else if (marcode == 'S')
        printf("\nIndividual is single.\n");
    else if (marcode == 'D')
        printf("\nIndividual is divorced.\n");
    else if (marcode == 'W')
        printf("\nIndividual is widowed.\n");
    else
        printf("\nAn invalid code was entered.\n");

    return 0;
}
