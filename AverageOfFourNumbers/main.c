#include <stdio.h>
int main()
{
    float num1, num2, num3, num4;
    printf("Enter 4 numbers: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    float average;
    average = (num1 + num2 + num3 + num4) / 4;
    printf("The average of your numbers is %5.2f", average);

    return 0;
}
