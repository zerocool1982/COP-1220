#include <stdio.h>

int main()
{
    int i, grades[25], n;
    float  average, sum = 0.0;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i=0; i<n; ++i)
    {
        printf("Enter grades of student %d:", i + 1);
        scanf("%d", &grades[i]);
        sum+=grades[i];
        average = sum / n;
    }
    printf("The average grade is %.2f", average);

return 0;
}
