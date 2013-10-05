#include <stdio.h>
int main()
{
    float num1, num2, num3, num4;
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter a second number: ");
    scanf("%f", &num2);
    printf("Enter a third number: ");
    scanf("%f", &num3);
    printf("Enter a fourth number: ");
    scanf("%f", &num4);

    float ave = (num1 + num2 + num3 + num4) / 4;
    printf("The average for your four numbers is %5.3f", ave);

    return 0;
}
