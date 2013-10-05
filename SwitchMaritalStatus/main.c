#include <stdio.h>
int main()
{
    char marcode;

    printf("Enter the marital code (S,M,D, or W): ");
    scanf("%c", &marcode);

    switch (marcode)
    {
        case 'S':
            printf("\nIndividual is Single.\n");
            break;
        case 'M':
            printf("\nIndividual is Married.\n");
            break;
        case 'D':
            printf("\nIndividual is Divorced.\n");
            break;
        case 'W':
            printf("\nIndividual is Widowed.\n");
            break;
        default:
            printf("\nInvalid entry.\n");
    }
    return 0;
}
