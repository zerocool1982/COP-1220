#include <stdio.h>
#define INCHTOMILL 25.4
#define MILLTOINCH 0.0394
#define INCHTOCENT 2.54
#define CENTTOINCH 0.3937
#define FEETTOMET 0.3048
#define METTOFEET 3.281
#define YARDTOMET 0.9144
#define METTOYARD 1.094
#define MILESTOKILO 1.609
#define KILOTOMILES 0.6214

int main()
{
    int selection;
    double beginDistance, finalDistance;

    printf("\t\t\t**********************************\n");
    printf("\t\t\t**Distance Conversion Calculator**\n");
    printf("\t\t\t**********************************\n\n");

    printf("\t\t\tWhat would you like to convert?\n");
    printf("\t\t\t1. Inches to Millimeters\n\t\t\t2. Millimeters to Inches\n\t\t\t3. Inches to Centimeters\n\t\t\t4. Centimeters to Inches\n\t\t\t5. Feet to Meters\n\t\t\t6. Meters to Feet\n\t\t\t7. Yards to Meters\n\t\t\t8. Meters to Yards\n\t\t\t9. Miles to Kilometers\n\t\t\t10. Kilometers to Miles\n\n");
    printf("\t\t\tPlease select a number: ");
    scanf("%d", &selection);

    printf("\n\t\t\tPlease input starting distance: ");
    scanf("%lf", &beginDistance);

    if (selection == 1)
    {
        finalDistance = beginDistance * INCHTOMILL;
        printf("\n\t\t\tThere are %.2lf millimeteres in %.2lf inches.\n\n", finalDistance, beginDistance);
    }
        else
        {
            if (selection == 2)
            {
                finalDistance = beginDistance * MILLTOINCH;
                printf("\n\t\t\tThere are %.4lf inches in %.2lf millimeters.\n\n", finalDistance, beginDistance);
            }
            else
            {
                if (selection == 3)
                {
                    finalDistance = beginDistance * INCHTOCENT;
                    printf("\n\t\t\tThere are %.2lf centimeters in %.2lf inches.\n\n", finalDistance, beginDistance);
                }
                else
                {
                    if (selection == 4)
                    {
                        finalDistance = beginDistance * CENTTOINCH;
                        printf("\n\t\t\tThere are %.4lf inches in %.2lf centimeteres.\n\n", finalDistance, beginDistance);
                    }
                    else
                    {
                        if (selection == 5)
                        {
                            finalDistance = beginDistance * FEETTOMET;
                            printf("\n\t\t\tThere are %.4lf meters in %.2lf feet.\n\n", finalDistance, beginDistance);
                        }
                        else
                        {
                            if (selection == 6)
                            {
                                finalDistance = beginDistance * METTOFEET;
                                printf("\n\t\t\tThere are %.3lf feet in %.2lf meters.\n\n", finalDistance, beginDistance);
                            }
                            else
                            {
                                if (selection == 7)
                                {
                                    finalDistance = beginDistance * YARDTOMET;
                                    printf("\n\t\t\tThere are %.2lf meters in %.2lf yards.\n\n", finalDistance, beginDistance);
                                }
                                else
                                {
                                    if (selection == 8)
                                    {
                                        finalDistance = beginDistance * METTOYARD;
                                        printf("\n\t\t\tThere are %.2lf yards in %.2lf meters.\n\n", finalDistance, beginDistance);
                                    }
                                    else
                                    {
                                        if (selection == 9)
                                        {
                                            finalDistance = beginDistance * MILESTOKILO;
                                            printf("\n\t\t\tThere are %.2lf kilometers in %.2lf miles.\n\n", finalDistance, beginDistance);
                                        }
                                        else
                                        {
                                            if (selection == 10)
                                            {
                                                finalDistance = beginDistance * KILOTOMILES;
                                                printf("\n\t\t\tThere are %.2lf miles in %.2lf kilometers.\n\n", finalDistance, beginDistance);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }


    return 0;
}
