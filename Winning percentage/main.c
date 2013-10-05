#include <stdio.h>
int main()

{
    float won;
    float lost;
    float totalGames;
    float winPerc;
    float percConv;

    won = 98.0;
    lost = 55.0;
    totalGames = won + lost;
    winPerc = won/totalGames;
    percConv = winPerc * 100;

    printf("The total win percentage is %5.2f%%\n", percConv);

    return 0;
}
