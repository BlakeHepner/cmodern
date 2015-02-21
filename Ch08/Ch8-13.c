//Enter a first and last name:
#include <stdio.h>

#define MAX_LAST 20

int main(void)
{
  char firstinitial;
  char lastname[MAX_LAST];
  int lastsize;
  char ch; // used as a simple placeholder for last name.
  
  printf("Enter a first and last name: ");
  while ((firstinitial = getchar()) == ' ');
  //trims any beginning whitespace until it hits its first real character
  
  while (getchar() != ' ');
  //trims the rest of the first name away
  
  for (lastsize = 0; lastsize < MAX_LAST; lastsize++)
  {
    if ((ch = getchar()) == '\n') break;
    lastname[lastsize] = ch;
  }
/*  while ((lastname = getchar()) != '\n')
    putchar(lastname);
*/

  printf("You entered the name: ");
  for (int i = 0; i < lastsize; i++)
  {
    putchar(lastname[i]);
  }
  printf(", %c\n", firstinitial);
  return 0;
}