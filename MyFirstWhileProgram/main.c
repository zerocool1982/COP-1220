#include <stdio.h>
int main()
{
    int count;

    count = 1; //initialize count. could be any variable other than count as well
    while (count <= 10)
    {
        printf("%d ", count);
        count++; //add 1 to count
    }
    printf("\n"); //print a blank line
    return 0;
}
