#include <stdio.h>
int main()
{
    float num1, num2, product;

    printf("Please type in a number: ");
    scanf("%f", &num1);
    printf("Please type in another number: ");
    scanf("%f", &num2);
    product = num1 * num2;
    printf("%f times %f is %f", num1, num2, product);

    return 0;

}
