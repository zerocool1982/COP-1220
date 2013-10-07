#include <stdio.h>

int main()
{
    //int x[10];
    char name[11];

    printf("Enter your name: ");
    scanf("%s", name); //no ampersand; %s for string array

    printf("Hi, %s\n", name);


    return 0;
}
