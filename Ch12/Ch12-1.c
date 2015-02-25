#include <stdio.h>

int main(void)
{
  int i;
  printf("Enter a message: ");
  for (i = 0; i < MAX_CHAR; i++)
  {
    if ((ch = getchar()) == '\n') break;
    input[i] == ch;
  }
  
  printf("Reversal is: ");
  for (; i > 0; i--)
    putchar(input[i - 1]);
  
  return 0;
  
  
}