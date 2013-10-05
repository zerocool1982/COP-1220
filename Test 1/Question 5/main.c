/* Date: Feb 15 2012, COP 1220
Using Linear Nested selection structure
This program will determine the bonus received by employees
*/

#include <stdio.h>

int main(void)
{
	printf("This program will determine the bonus received by employees\n");

	int lastYrProd, thisYrProd, prodDiff, bonus;

	printf("\n\nEnter last year production:\n");
	scanf("%d", &lastYrProd);
	printf("\nEnter this year production:\n");
	scanf("%d", &thisYrProd);
	prodDiff = thisYrProd - lastYrProd;
	if (prodDiff <= 0)
        {
            printf("\n\nSorry no bonus. Better luck next time.\n");
        }
    else
        {
            if (prodDiff <= 1000)
            {
                bonus = 250;
            }
            else
            {
                if (prodDiff <= 3000)
            {
                bonus = 500;
            }
            else
            {
                if (prodDiff <= 6000)
            {
                bonus = 750;
            }
            else
            {
                {
                bonus = 1000;
            }
            }
            }
            }

            printf("\n\nCongratulations! you got a bonus of:%d\n\n", bonus);
}

	return 0;
}
