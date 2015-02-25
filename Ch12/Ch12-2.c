#include <stdio.h>
#include <ctype.h>

#define MAX_CHAR 80 //This is the maximum size of the input

int main(void)
{
  char *pointer, *reverse, ch, input[MAX_CHAR];
  
  printf("Enter a message (Maximum of %d alpha characters): ", MAX_CHAR);
  for (pointer = input; pointer < input + MAX_CHAR;)
  {
    if ((ch = getchar()) == '\n') break; //Exits when encounter end of line.
    if (isalpha(ch)) //Ensures only alpha characters are stored.
    {
      *pointer = tolower(ch);
      pointer++;
    }
  }
  
  pointer--; //This is here because the above for statement sets pointer 1 higher than it should be.
  for (reverse = input; pointer >= input; pointer--, reverse++)
  {
    if (*pointer != *reverse) //Compares letters starting at opposite sides of the array.
    {
      printf("Not a palindrome.\n");
      return 1;
    }
  }
  
  printf("Palindrome.\n");
  return 0;
}