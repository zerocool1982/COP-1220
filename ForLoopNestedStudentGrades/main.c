/* This program accepts 4 grades for  1 student and computes the average.
This is repeated for next 19 students totaling 20 students 4 grades 20 averages */

#include <stdio.h>
#define NUMSTUDENTS 20
#define NUMGRADES 4

int main()
{
    int i, j;
    float grade, total, average;

    for (i = 1; i <= NUMSTUDENTS; i++)
    {
        total = 0; //clears the total for this student

        for (j = 1; j <= NUMGRADES; j++)
        {
            printf("Enter an exam grade for this student: ");
            scanf("%f", &grade);
            total = total + grade; //add the grade into the total
        } //end of the inner  for loop

        average = total / NUMGRADES; //calculates the average
        printf("\nThe average for student %d is %f\n\n", i, average);
    } //end of the outer for loop

    return 0;
}
