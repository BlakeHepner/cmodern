#include <stdio.h>

int number, hundredsnumber, tensnumber, onesnumber;

int main(void)
{
  printf("Enter a three digit number: ");
  scanf("%3d", &number);
  
  hundredsnumber = number / 100;
  tensnumber = (number - (hundredsnumber * 100)) / 10;
  onesnumber = number % 10;
  
  printf("The reversal is: %d%d%d\n", onesnumber, tensnumber, hundredsnumber);
  return 0;
}