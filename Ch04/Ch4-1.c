#include <stdio.h>

int number, tensnumber, onesnumber;

int main(void)
{
  printf("Enter a two digit number: ");
  scanf("%2d", &number);
  
  tensnumber = number / 10;
  onesnumber = number % 10;
  
  printf("The reversal is: %d%d\n", onesnumber, tensnumber);
  return 0;
}