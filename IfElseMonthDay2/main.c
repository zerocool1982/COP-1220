//This program outputs the month and day that you input
#include <stdio.h>
#include <ctype.h>
int main()
{
    int month, day;


    printf("Please enter the month and the day\n(i.e. 4 26 for April 26th)\n");
    scanf("%d %d", &month, &day);



    if ( isalpha(month) || day > 31 || day < 1 || month < 1 || month > 12)
        printf("invalid entry");
    else if (month == 1)
        printf("\nYou have entered day %d of January.\n", day);
    else if (month == 2)
        printf("\nYou have entered day %d of February.\n", day);
    else if (month == 3)
        printf("\nYou have entered day %d of March.\n" , day);
    else if (month == 4)
        printf("\nYou have entered day %d of April.\n", day);
    else if (month == 5)
        printf("\nYou have entered day %d of May.\n", day);
    else if (month == 6)
        printf("\nYou have entered day %d of June.\n", day);
    else if (month == 7)
        printf("\nYou have entered day %d of July.\n", day);
    else if (month == 8)
        printf("\nYou have entered day %d of August.\n", day);
    else if (month == 9)
        printf("\nYou have entered day %d of September.\n", day);
    else if (month == 10)
        printf("\nYou have entered day %d of October.\n", day);
    else if (month == 11)
        printf("\nYou have entered day %d of November.\n", day);
    else if (month == 12)
        printf("\nYou have entered day %d of December.\n", day);

        return 0;
}
