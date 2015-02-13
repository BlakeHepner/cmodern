#include <stdio.h>

int input, result;

int main(void)
{
  printf("Enter a number: ");
  scanf("%d", &input);
  
  if (input >= 0 && input <= 9)
    result = 1;
  else if (input >= 10 && input <= 99)
    result = 2;
  else if (input >= 100 && input <= 999)
    result = 3;
  else if (input >= 1000 && input <= 9999)
    result = 4;
  else
    {
    printf("Invalid input!\n");
    return 1;
    }
  
  printf("The number %d has %d digits\n", input, result);
  return 0;
}