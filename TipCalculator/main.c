#include <stdio.h>
int main()
{
    printf("Welcome to your tip calculator!!!\n\n");
    float owed;

    printf("Please input how much you owe: ");
    scanf("%f", &owed);

    float tip = owed * .15;
    printf("\n\nYou owe %5.2f to the waiter/waitress.", tip);

    puts("\n\nPress enter to end tip calculator");
    getchar();
    getchar();

    return 0;


}
