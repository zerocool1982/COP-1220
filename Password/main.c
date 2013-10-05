#include <stdio.h>

int main()
{
    int pword;
    printf("Enter four number passcode: \n\n");
    scanf("%d", &pword);

    if (pword == 1353)
        printf("\n\nPasscode correct! Press Enter.\n\n");

    else
        printf("\n\nWrong passcode. End transmission.\n\n");

    return 0;
}
