//average of ages using an array

#include <stdio.h>

int main()
{
    int age[6], count; //6 spots for age array
    float sum = 0.0, average;

    for (count = 1; count < 7; count++) //stores each age into one of the spots in the array
    {
        printf("Enter age of student %d: ", count);
        scanf("%d", &age[count]);
    }

    for (count = 1; count < 7; count++)
    {
        sum = sum + age[count];
    }

    average = sum / 6;
    printf("The average age is: %.2f", average);

    return 0;
}
