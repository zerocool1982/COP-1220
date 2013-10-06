#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i = 0;

    while (i < 1)
    {
        printf("%d\n", 1 + rand() % 11);
        i++;
    }

    return 0;
}
