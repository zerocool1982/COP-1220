#include <stdio.h>
int main()
{
    int tempType;
    float temp, fahren, celsius;

    printf("Enter the temperature to be converted: ");
    scanf("%f", &temp);
    printf("Convert F to C? Enter 1\nConvert C to F? Enter 2\n");
    scanf("\n%d", &tempType);

    switch (tempType)
    {
    case 1:
        celsius = (5.0 / 9.0) * (temp - 32.0);
        printf("\nThe equivalent Celsius temperature is %6.2f\n", celsius);
        break;

    case 2:
        fahren = (9.0 / 5.0) * temp + 32.0;
        printf("\nThe equivalent Fahrenheit temperature is %6.2f\n", fahren);
        break;

    default:
        printf("\nIllegal Entry!!!\n\n");
        break;
    }
    return 0;
}
