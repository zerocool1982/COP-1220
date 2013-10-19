/*

Name: Josh Reynolds
Topic: Logical operators

Date: Oct 17, 2013

*/


#include <stdio.h>
#define DISCOUNT 0.10

int main()

{
 int age;
 float finalTotal, tickPrice;
 char rating, military;
 printf("\t\t\t*****Movie ticket calculator*****\n");

 printf("\n\t\t\t Enter price of movie: ");
 scanf("%f", &tickPrice);

 printf("\n\t\t\t Please enter your age: ");
 scanf("%d", &age);

 if ((age >= 64) || (age <= 13))
 {
     finalTotal = tickPrice - (tickPrice * DISCOUNT);
 }
 else
 {
     if ((age <64) || (age > 13))
     {
        printf("\n\t\t\t Is customer military y/n: ");
        scanf("\n%c", &military);
        if (military == 'y')
        {
          finalTotal = tickPrice - (tickPrice * DISCOUNT);
        }
        else
        {
            if (military == 'n')
            {
                 printf("\n\t\t\t Is the movie rated G y/n: ");
                 scanf("\n%c", &rating);

                 if (rating == 'y')
                 {
                     finalTotal = tickPrice - (tickPrice * DISCOUNT);
                 }
                 else
                 {
                     if (rating == 'n')
                     {
                         finalTotal = tickPrice;
                     }
                }
            }
        }
     }
 }

 printf("\n\t\t\t Your ticket price is %2.2f\n\n", finalTotal);

 return 0;

}
