#include <stdio.h>
int main()

{
    int lines;
    int n;

    n = 100;
    lines = n * ( n - 1 ) / 2;

    printf("%d is how many lines you will need to connect 100 phones\n\n", lines);

    return 0;
}
