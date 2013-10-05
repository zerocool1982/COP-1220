#include <stdio.h>

#define RANGE_FIFTY 50000
#define BASE_FIFTY 575
#define PERCENT_FIFTY 0.16

#define RANGE_FORTY 40000
#define BASE_FORTY 550
#define PERCENT_FORTY 0.14

#define RANGE_THIRTY 30000
#define BASE_THIRTY 525
#define PERCENT_THIRTY 0.12

#define RANGE_TWENTY 20000
#define BASE_TWENTY 500
#define PERCENT_TWENTY 0.09

#define RANGE_TEN 10000
#define BASE_TEN 450
#define PERCENT_TEN  0.05

#define BASE_ONE 400
#define PERCENT_ONE 0.03

int main()
{
    float income, monthlySales, tempBase, tempPercent;

    printf("Enter monthly sales: ");
    scanf("%f", &monthlySales);

    if (monthlySales >= RANGE_FIFTY)
    {
        tempBase = BASE_FIFTY;
        tempPercent = PERCENT_FIFTY;
    }
        else
        {
            if (monthlySales >= RANGE_FORTY)
            {
                tempBase = BASE_FORTY;
                tempPercent = PERCENT_FORTY;
            }
                else
                {
                    if (monthlySales >= RANGE_THIRTY)
                    {
                        tempBase = BASE_THIRTY;
                        tempPercent = PERCENT_THIRTY;
                    }
                        else
                        {
                            if (monthlySales >= RANGE_TWENTY)
                            {
                                tempBase = BASE_TWENTY;
                                tempPercent = PERCENT_TWENTY;
                            }
                                else
                                    tempBase = BASE_ONE;
                                    tempPercent = PERCENT_ONE;
                        }
                }
        }
    income = tempBase + (tempPercent * monthlySales);
    printf("Montly income is: %f", income);
    return 0;
}
