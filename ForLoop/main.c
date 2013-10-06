#include <stdio.h>

int main()
{
    int count, loopCounter;

    printf("How many times? ");
    scanf("%d", &count);

    for (loopCounter = 0; loopCounter < count; loopCounter++)
    {
        printf("This is the information age!\n");
    }



    return 0;
}
