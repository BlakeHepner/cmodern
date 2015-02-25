#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 80

int main(void)
{
  char *pointer, *reverse;
  char ch;
  char input[MAX_CHAR];
  
  printf("Enter a message: ");
  for (pointer = input; pointer < input + MAX_CHAR;)
  {
    if ((ch = getchar()) == '\n') break;
    if (isalpha(ch))
    {
      *pointer++ = tolower(ch);
    }
  }
  
  
  for (reverse = input; pointer >= input; pointer--, reverse++)
    if (*reverse == *pointer);
    else
    {
      printf("Not a palindrome.\n");
      return 1;
    }
  
  printf("Palindrome.\n");
  return 0;
}