#include <stdio.h>
int main()
{
    int code;

    printf("Enter manufacturer code from front of disk drive: ");
    scanf("%d", &code);

    switch (code)
    {
    case 1:
        printf("\n3M Corporation");
        break;
    case 2:
        printf("\nMaxell Coporation");
        break;
    case 3:
        printf("\nSony Corporation");
        break;
    case 4:
        printf("\nVerbatum Corporation");

    }
    return 0;
}
