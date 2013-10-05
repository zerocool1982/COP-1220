//This program outputs the month and day that you input
#include <stdio.h>
#include <ctype.h>
int main()
{
    int month, day;

    printf("Please enter the month and the day\n(i.e. 4 26 for April 26th)\n");
    scanf("%d %d", &month, &day);

    /* int isdigit(int month);
        printf("Not integer\n");
    int isdigit(int day);
        printf("Not integer\n"); */

    switch (month)
    {
        case 1:
           if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered January %d", day);
            break;
        case 2:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered February %d", day);
            break;
        case 3:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered March %d", day);
            break;
        case 4:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered April %d", day);
            break;
        case 5:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered May %d", day);
            break;
        case 6:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered June %d", day);
            break;
        case 7:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered July %d", day);
            break;
        case 8:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered August %d", day);
            break;
        case 9:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered September %d", day);
            break;
        case 10:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered October %d", day);
            break;
        case 11:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered November %d", day);
            break;
        case 12:
            if (day > 31 || day < 1 || month < 1 || month > 12)
                printf("Invalid entry!");
            else
                printf ("You entered December %d", day);
            break;
       default:
            printf("Invalid date entered\n");
    }

    getchar();
    getchar();
    return 0;
}
