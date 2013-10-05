#include <stdio.h>
#define TAXEMPT 0.0
#define STSLSTAX 0.03
#define FEDSTSLSTAX 0.05
#define SPECSLSTAX 0.07

int main()
{
    int custID, taxCode;
    float tax, purchAmt, totalAmt;

    printf("Enter your customer ID: ");
    scanf("%d", &custID);

    printf("Enter purchase amount: ");
    scanf("%f", &purchAmt);

    printf("Enter your tax code: ");
    scanf("%d", &taxCode);

    if (taxCode == 0)
    {
        tax = TAXEMPT;
    }
    else
    {
        if (taxCode == 1)
        {
            tax = STSLSTAX;
        }
        else
        {
            if (taxCode == 2)
            {
                tax = FEDSTSLSTAX;
            }
            else
            {
                if (taxCode == 3)
                {
                    tax = SPECSLSTAX;
                }
            }
        }
    }

    totalAmt = purchAmt * tax;

    printf("\n\nCustomer ID: %d\n\nPurchase Amount: %5.2f\n\nSales Tax: %2.0f percent\n\nTotal Amount Due: $%5.2f", custID, purchAmt, tax * 100, totalAmt);


    return 0;
}
