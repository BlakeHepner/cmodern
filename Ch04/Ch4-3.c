#include <stdio.h>

int hundredsnumber, tensnumber, onesnumber;

int main(void)
{
  printf("Enter a three digit number: ");
  scanf("%1d%1d%1d", &hundredsnumber, &tensnumber, &onesnumber);
  
  printf("The reversal is: %d%d%d\n", onesnumber, tensnumber, hundredsnumber);
  return 0;
}