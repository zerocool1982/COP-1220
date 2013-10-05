/*
Name: Joshua Reynolds
Date: 09/12/2013
Desc: use float and double data types
*/

#include <stdio.h>

int main()
{
    double testscore1, testscore2, testscore3, testscore4, testscore5;
    double avgDouble;
    float avgFloat;

    printf("\t\t      ************************************\n");
    printf("\t\t\t\tTEST SCORE AVERAGE\n");
    printf("\t\t      ************************************\n");
    printf("\n\n\t\t      This program accepts 5 test scores\n\t\t      and calculates the average\n\n");

    printf("\t\t      Enter the first test score: ");
    scanf("%lf", &testscore1);
    printf("\n\t\t      Enter the second test score: ");
    scanf("%lf", &testscore2);
    printf("\n\t\t      Enter the third test score: ");
    scanf("%lf", &testscore3);
    printf("\n\t\t      Enter the fourth test score: ");
    scanf("%lf", &testscore4);
    printf("\n\t\t      Enter the fifth test score: ");
    scanf("%lf", &testscore5);
    avgDouble = (testscore1 + testscore2 + testscore3 + testscore4 + testscore5) / 5.0;
    avgFloat = (testscore1 + testscore2 + testscore3 + testscore4 + testscore5) / 5.0;
    printf("\n\t\tThe average of test scores as double datatype is %5.1lf\n\n", avgDouble);
    printf("\n\t\tThe average of test scores as float datatype is %1.1f\n\n", avgFloat);


    return 0;
}
