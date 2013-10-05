#include <stdio.h>
#define RANGEA 90
#define RANGEB 80
#define RANGEC 70
#define RANGED 60
int main()
{
    int testScore;

    printf("This program will accept test score\nfrom user and display corresponding letter grade\n\n");

    printf("\t\nEnter a test score: ");
    scanf("%d", &testScore);

    if(testScore >= RANGEA)
    {
        printf("You have an A");
    }
    else
    {
        if(testScore >= RANGEB)
        {
            printf("You have an B");
        }
        else
        {
            if(testScore >= RANGEC)
            {
                printf("You have a C");
            }
            else
            {
                if(testScore >= RANGED)
                {
                    printf("You have a D");
                }
                else
                {
                        printf("You have a F");
                }
            }
        }
    }


return 0;
}
