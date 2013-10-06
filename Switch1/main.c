#include <stdio.h>

int main()
{
    int num1, num2, choice, result;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("\nEnter 2nd number: ");
    scanf("%d", &num2);

    printf("\nPress 1 for Addition\n");
    printf("\nPress 2 for Subtraction\n");
    printf("\nPress 3 for Multiplication\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1: result = num1 + num2;
        break;

        case 2: result = num1 - num2;
        break;

        case 3: result = num1 * num2;
        break;

        default:
        printf("You have entered an incorrect choice!");


    }

    printf("Your answer is %d", result);

    return 0;


}
