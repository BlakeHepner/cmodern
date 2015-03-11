#include <stdio.h>

#define MAX_CHAR 80

int main(void)
{
  int i;
  char ch;
  char input[MAX_CHAR];
  
  printf("Enter a message: ");
  for (i = 0; i < MAX_CHAR; i++)
  {
    if ((ch = getchar()) == '\n') break;
    input[i] = ch;
  }
  
  printf("Reversal is: ");
  for (; i > 0; i--)
    putchar(input[i - 1]);
  
  printf("\n");
  return 0;
  
  
}