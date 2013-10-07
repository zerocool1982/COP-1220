/* This is not mine.
   Credit goes to http://forgetcode.com/C/1555-Guessing-Game
   I loved it and reproduced it here as a learning tool for
   myself and others that are learning the random function and "for" loops.

   I did modify it some. Orgiginally, on line 19, it was rval = rand (100).
   The compiler wouldn't run the program. So I changed it to rval = rand () % 100.
   Now it works fine.
*/


 /* Guessing Game Solution */
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int main()
    {
    int i=8,rval,val,flag=1;
    rval=rand () % 100; // Generates a random number in the range 0 to 99
    printf("Welcome to Guessing Game.\n");
    printf("RULES:\n1. Only 8 chances to guess the randomly generated number.");
    printf("\n2. You can WIN the game when the number guessed\nis same as the randomly generated number.");
    printf("\n3. Hints will be provided during the PLAY.");
    printf("\n\n$$$ Good Luck. Start Guessing $$$");
    for (i=1; i<=8; i++)
    {
    printf("\n\nGUESS %d ? ",i);
    scanf("%d",&val);
    if (val > rval)
    printf("Your value is GREATER THAN the randomly generated number");
    else if (val < rval)
    printf("Your value is LESSER THAN the randomly generated number");
    else
    {
    flag=1;
    break;
    }
    }
    if (flag)
    printf("\n\n*** You are the WINNER. No. of tries = %d ***",i);
    else
    printf("\n\n*** You are the LOSER. ***");
    return 0;
    } /* End of Main */
