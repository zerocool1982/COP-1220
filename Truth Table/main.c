/*

Name: Josh Reynolds
Topic: Logical operators

Date: Oct 17, 2013

*/


#include <stdio.h>
#define TICKPRICE 11.00
#define DISCOUNT 0.10

int main()

{
 int age;
 float finalTotal = TICKPRICE;
 char rating, military;
 printf("Movie ticket calculator\n");

 printf("Is the movie rated G y/n: ");
 scanf("%c", &rating);

 printf("\nPlease enter your age: ");
 scanf("%d", &age);

 printf("\nIs customer military y/n: ");
 scanf("\n%c", &military);

 if ((((age >= 64) || (age <= 13)) || (military == 'y')) && (rating == 'y'))
 {
     finalTotal = TICKPRICE - (TICKPRICE * DISCOUNT);
 }

 printf("\nYour ticket price is %2.2f", finalTotal);


return 0;














}
