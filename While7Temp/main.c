#include <stdio.h>
#define ENDVALUE 50
int main() //program to convert Celsius to Fahrenheit
{
    int celsius;
    float fahren;

    /* display the heading lines */
    printf("DEGREES  DEGRESS\n");
    printf("CELSIUS FAHRENHEIT\n");
    printf("------- ----------\n");

    //now fill in the table osing a while loop
    celsius = 5; // starting celsius value

    while (celsius <= ENDVALUE)
    {
        fahren = (9.0/5.0) * celsius + 32.0;
        printf("%5d%11.2f\n", celsius, fahren);
        celsius = celsius + 5;
    }

    return 0;
}
