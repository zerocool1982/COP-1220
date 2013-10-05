#include <stdio.h>
#include <string.h>

int main() {
  char x[32];
  int y = 0;
  double z = 0.0;

  printf("What's your name? ");
  // note the use of fgets instead of scanf("%s",...)
  // to prevent buffer overflows by specifying a maximum length!
  fgets(x, 32, stdin);

  // remove newline
  x[strlen(x)-1] = '\0';

  printf("Hi, %s!  How old are you? ", x);
  scanf("%d", &y);

  printf("What's your favorite number? ");
  scanf("%lf", &z);

  printf("Nice to meet you, %s!  You are %d years old and like the number %.1f.\n", x, y, z);
  return 0;
}
