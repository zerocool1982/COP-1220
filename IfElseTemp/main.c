#include <stdio.h>
int main()
{
    float temp;
    printf("What is the temperature outside?");
    scanf("%f",&temp);
    if(temp < 85)
        printf("It's quite pleasant\n");
    if(temp > 85)
        printf("It's getting quite warm\n");

    return(0);
}
