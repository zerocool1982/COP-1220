#include <stdio.h>

int main()
{
    char me[20];    /* The char me[20]; thing is a variable declaration. It provides storage for
                    the information you enter (the I in I/O). You find out more about variables
                    in Chapter 8. */

    printf("What is your name?");
    scanf("%s",&me);        /* The new function here is scanf(), which is used to read
                             input from the keyboard and store it in the computer’s memory. */
    printf("Darn glad to meet you, %s\n",me);

    puts("Press any key to end");
    getchar();

    return 0;
}
