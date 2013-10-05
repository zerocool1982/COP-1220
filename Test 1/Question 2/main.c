#include <stdio.h>
#define RAISE5 100
#define RAISE9 500
#define RAISE14 250

int main()
{
    int raise, department;

    printf("\n\nEnter years of service with department: ");
    scanf("%d", &department);

    if (department <= 5)
    {
        raise = RAISE5;
    }
        else
        {
            if (department <= 9)
            {
                raise = RAISE9;
            }
            else
            {
                if (department <= 14)
                {
                    raise = RAISE14;
                }
            }
        }

        printf("\n\nThe raise for %d year(s) of service is: $%3d \n\n", department, raise);

        return 0;
}
