/*

Name: Josh Reynolds

Date: 10-17-2013

Topic: Arrays

*/

#include <stdio.h>

int main()
{
    int testScore, total = 0, counter, numOfTests;
    float avg = 0.0;

printf("Enter the number of tests: ");
scanf("%d", &numOfTests);
    /* printf("Enter test score 1:");
    scanf("%d", &testScore);

    total = total + testScore; //total = total + testScore

    printf("Enter test score 2:");
    scanf("%d", &testScore);

    total = total + testScore; //total = total + testScore

    printf("Enter test score 3:");
    scanf("%d", &testScore);

    total = total + testScore; //total = total + testScore

    */
    for (counter = 0; counter < numOfTests; counter = counter + 1) //or counter ++
    {
        printf("Enter test score %d: ", counter + 1);
        scanf("%d", &testScore);

        total = total + testScore; //total = total + testScore
    }
    if (counter > 0)
    avg = total / counter;

    printf("\nThe average is %6.2f\n\n", avg);

    return 0;

}
