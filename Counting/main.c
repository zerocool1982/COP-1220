#include <stdio.h>
int main()
{
    int count;

    count = 0;
    printf("\nThe initial value of count is %d.", count);
    count++;
    printf("\ncount is now %d.", count);
    count++;
    printf("\ncount is now %d.", count);
    count++;
    printf("\ncount is now %d.", count);
    count++;
    printf("\ncount is now %d.\n", count);

    return 0;
}
/* Using the incrementer operator, ++, the expression variable = variable + 1 */
/* can be replaced by either the expression variable++ or ++variable */
/* ++ operator appears before a variable it is called a prefix increment operator */
/* ++ operator appears after a variable it is called a postfix increment operator */
/* -- operator appears before a variable it is called a prefix decrement operator */
/* -- operator appears before a variable it is called a postfix decrement operator */
/* k = ++n is the equivalent to the two statements
            n = n + 1; \\ increment n first
            k = n; \\ assign n's value to k */

/* k + n++ is the equivalent to the two statements
            k = n; \\ assign n's value to k
            n = n + 1 \\ and then increment n */

/* (count = count + 1;) equals (count += 1;) equals (count++;) less memory is taken up by
last statement */
