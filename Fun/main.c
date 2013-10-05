#include <stdio.h>

int main()
{
    char me;
    printf("Hello, what is your name?  \n\n");
    scanf("%s",&me);
    printf("\n\nVery nice to meet you %s.\n", &me);

    int old;
    printf("\n\nHow old are you?  \n\n");
    scanf("%d",&old);
    printf("\n\nWow! %d is very old.\n", old);

    char place;
    printf("\n\nWhere were you born?  \n\n");
    scanf("%s", &place);
    printf("\n\nI've been to %s.\n\n", &place);
    printf("I loved %s.\n\n", &place);

    printf("\n\nIt has been great talking to you %s.\n\n", &me);


    puts("\n\nPlease press enter key to end");
    getchar();
    getchar();

    return 0;
}
