#include <stdio.h>
#include <ctype.h>

#define MAX_MSG 80

int main(void)
{
  char ch,input[MAX_MSG];
  int i, n;
  
  printf("Enter message: ");
  
  for (n = 0; n < MAX_MSG; n++)
    {
      if ((ch = getchar()) == '\n') break;
      input[n] = toupper(ch);
    }
  
  for (i = 0; i < n; i++)
    {
      switch(input[i])
        {
          case 'A': putchar('4'); break;
          case 'B': putchar('8'); break;
          case 'E': putchar('3'); break;
          case 'I': putchar('1'); break;
          case 'O': putchar('0'); break;
          case 'S': putchar('5'); break;
          default: putchar(input[i]); break;
        }
    }
  
  printf("!!!!!!!!!!\n");
  
  return 0;
}