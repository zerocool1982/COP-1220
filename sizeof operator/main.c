#include <stdio.h>
int main()
{
    printf("Data Type     Bytes\n");
    printf("---------     -----\n");
    printf("char            %d\n", sizeof(char));
    printf("short int       %d\n", sizeof(short));
    printf("int             %d\n", sizeof(int));
    printf("long int        %d\n", sizeof(long));
    printf("float           %d\n", sizeof(float));
    printf("double          %d\n", sizeof(double));
    printf("long double     %d\n", sizeof(long double));

    return 0;
}
