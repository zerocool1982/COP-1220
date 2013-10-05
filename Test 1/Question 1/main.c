#include <stdio.h>


int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age == 40)
    {
       printf("\n\nHappy Birthday!\n\n");
    }
    else
        printf("\n\nSorry\n\n");


    return 0;
}
