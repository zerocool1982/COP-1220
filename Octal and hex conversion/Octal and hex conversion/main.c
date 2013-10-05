#include <stdio.h>
int main()
{
    printf("The value of the decimal number 9 in octal is %o.\n", 9); /* %o is for converting dec. to octal */
    printf("The value of the decimal number 9 in hexadecimal is %x.\n", 9); /* %x is for converting dec. to hex. */
    printf("The value of the decimal number 14 in octal is %o.\n", 14);
    printf("The value of the decimal number 14 in hexadecimal is %x.\n", 14); /* something is wrong. I'm getting a lower case 'E' */

    return 0;
}
