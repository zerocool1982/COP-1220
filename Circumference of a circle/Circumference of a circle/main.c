#include <stdio.h>

int main()
{
   float radius, circumference;  /* declare an input and output item */

   radius = 2.0; /* set a value for the radius */
   circumference = 2.0 * 3.1416 * radius; /* calculate the circumference */
   printf("The circumference of the circle is %f\n", circumference);

   return 0;

}
