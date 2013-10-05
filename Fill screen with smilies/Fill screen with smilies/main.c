/*c program to fill all the screen to smiley icon*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int x,y;
 for(x=1, y=1; y<=1000; y++)
   printf("%2c",x);
 getch();
 return 0;
}
