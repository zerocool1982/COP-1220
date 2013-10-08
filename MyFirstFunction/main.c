#include <stdio.h>

int main()
{
    void findMax (float , float); //the function prototype
    float firstnum, secnum;

    printf("Enter a number: ");
    scanf("%f", &firstnum);
    printf("Great! Please enter a second number: ");
    scanf("%f", &secnum);

    findMax (firstnum, secnum); //the funcion is called here

    return 0;
}

//the following is the function findMax
void findMax (float x, float y)
{
    float maxnum;

    if (x >= y) // find the maximum number
    {
        maxnum = x;
    }
    else
    {
        maxnum = y;
    }

    printf("\nThe maximum of the two numbers entered is %f\n", maxnum);
}
