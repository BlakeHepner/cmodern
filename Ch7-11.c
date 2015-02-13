//Enter a first and last name:
#include <stdio.h>

int main(void)
{
  char firstinitial, lastname;
  
  printf("Enter a first and last name: ");
  while ((firstinitial = getchar()) == ' ');
  
  while (getchar() != ' ');
  
  while ((lastname = getchar()) != '\n')
    putchar(lastname);
  
  printf(", %c\n", firstinitial);
  return 0;
}