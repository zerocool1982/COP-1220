/*
Name: Joshua Reynolds
Date: 09/12/2013
Desc: use float and double data types
*/

#include <stdio.h>

int main()
{
    float testscore1, testscore2, testscore3, testscore4, testscore5, avgFloat;

    printf("\t\t      ************************************\n");
    printf("\t\t\t\tTEST SCORE AVERAGE\n");
    printf("\t\t      ************************************\n");
    printf("\n\n\t\t      This program accepts 5 test scores\n\t\t      and calculates the average\n\n");

    printf("\t\t      Enter the first test score: ");
    scanf("%f", &testscore1);
    printf("\n\t\t      Enter the second test score: ");
    scanf("%f", &testscore2);
    printf("\n\t\t      Enter the third test score: ");
    scanf("%f", &testscore3);
    printf("\n\t\t      Enter the fourth test score: ");
    scanf("%f", &testscore4);
    printf("\n\t\t      Enter the fifth test score: ");
    scanf("%f", &testscore5);

    avgFloat = (testscore1 + testscore2 + testscore3 + testscore4 + testscore5) / 5.0;
    printf("\n\t\t     *************************************");
    printf("\n\t\t      The average of test scores is %5.2f\n", avgFloat);
    printf("\t\t     *************************************\n");

    if(avgFloat >= 70.0)
    {
        printf("\n\t\t        You have a passing average!!!\n\n");
    }
    else
    {
        printf("\n\t\t        You have a failing average!!!\n\n");
    }


    return 0;
}
