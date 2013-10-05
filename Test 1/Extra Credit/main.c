#include <stdio.h>
#define LESS2PNDS 1.10
#define LESS6PNDS 2.20
#define LESS10PNDS 3.70
#define OVER10PNDS 3.80
int main()
{
    int weight;
    float ratePerPound, totalCharge;

    printf("Enter how many pounds the shipment weighs: ");
    scanf("%d", &weight);

    if (weight <= 2)
    {
        ratePerPound = LESS2PNDS;
    }
        else
        {
            if (weight <= 6)
            {
                ratePerPound = LESS6PNDS;
            }
            else
            {
                if (weight <= 10)
                {
                    ratePerPound = LESS10PNDS;
                }
                else
                    ratePerPound = OVER10PNDS;
            }
        }

        totalCharge = weight * ratePerPound;

        printf("\n\nThe shipping charges for a package weighing %2d pounds is $%1.2f per pound.", weight, ratePerPound);
        printf("\n\nYour total shipping charge is: $%5.2f\n\n", totalCharge);
        return 0;
}
