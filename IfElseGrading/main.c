#include <stdio.h>
int main()
{
  float grade;

printf("Enter numeric final grade: ");
scanf("%f", &grade);

if (grade >=90.0)
    printf("\nFinal grade: A\n");
else if (grade >=80.0)
    printf("\nFinal grade: B\n");
else if (grade >=70.0)
    printf("\nFinal grade: C\n");
else if (grade >=60.0)
    printf("\nFinal grade: D\n");
else if (grade <60.0)
    printf("\nFinal grade: F\n");
else
    printf("\nInvalid input\n");

return 0;
}

