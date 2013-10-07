#include <stdio.h>

int main()
{
    int idNum;
    do
    {
       printf("\nEnter and identification number between 1000 and 1999");
    printf("\n  or any negative number to exit program:  ");
    scanf("%d", &idNum);

    if (idNum < 0)
        break;

    if (idNum >= 1000 && idNum <= 1999)
        break; //break if a valid id num was entered
    else
    {
        printf("\n An invalid number was just entered");
        printf("\nPlease check the ID number and re-enter");
        printf("\nA valid ID number is between 1000 and 1999\n\n");
    }
    }
    while (1); //this expression is always true

    return 0;
}
