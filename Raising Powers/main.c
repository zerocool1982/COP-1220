#include <stdio.h>
#include <math.h>

int main()
{
   double a, b, result;

   printf("Enter integer a and interger b to calculate a^b\n");
   scanf("%lf%lf", &a, &b);

   result = pow(a, b);

   printf("%.2lf raised to %.2lf is: %.2lf", a, b, result);

   return 0;
}
