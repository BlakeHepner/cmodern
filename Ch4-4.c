#include <stdio.h>

int number, oct1, oct2, oct3, oct4;

int main(void)
{
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);
  
  oct4 = number % 8;
  oct3 = (number / 8) % 8;
  oct2 = (number / 64) % 8;
  oct1 = (number / 512) % 8;
  
  printf("In octal, your number is: 0%d%d%d%d\n", oct1, oct2, oct3, oct4);
  return 0;
}