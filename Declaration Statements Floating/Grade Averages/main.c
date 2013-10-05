#include <stdio.h>
int main()
{
    float grade1; /* declare grade1 as a double variable */
    float grade2; /* declare grade2 as a double variable */
    float total; /* declare total as a double variable */
    float average; /* declare average as a double variable */

    grade1 = 85.5f;
    grade2 = 97.0f;
    total = grade1 + grade2;
    average = total/2.0;
    printf("The average grade is %f\n", average);

    return 0;

    /* the four separte declarations used can be replce by a single declaration statement
    float grade1, grade2, total, average; Declaring multiple variables in a single
    declaration requires that the data type of the variables be given only once,
    that all variables be separated by commas, and that only one smicolon be used to terminate the declaration. */
}
