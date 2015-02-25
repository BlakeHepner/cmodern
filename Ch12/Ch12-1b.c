#include <stdio.h>

#define MAX_CHAR 80

int main(void)
{
  char *pointer;
  char ch;
  char input[MAX_CHAR];
  
  printf("Enter a message: ");
  for (pointer = input; pointer < input + MAX_CHAR; pointer++)
  {
    if ((ch = getchar()) == '\n') break;
    *pointer = ch;
  }
  
  printf("Reversal is: ");
  for (pointer = input + MAX_CHAR - 1; pointer >= input; pointer--)
    putchar(*pointer);
  
  printf("\n");
  return 0;
  
  
}