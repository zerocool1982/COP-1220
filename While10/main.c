#include <stdio.h>

int main()
{
    int count, loopCounter = 0;

    printf("How many times? ");
    scanf("%d", &count);

    while(loopCounter < count)
    {
        printf("This is the information age!\n");
        loopCounter++;
    }
    return 0;
}
