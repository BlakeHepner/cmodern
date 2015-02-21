#include <stdio.h>

int main(void)
{
  float input, largest = 0;
  
  for (;;)
    {
      printf("Enter a number: ");
      scanf("%f", &input);
      if (input <= 0) break;
      if (input > largest) largest = input;
    }
  printf("The largest number entered was %f\n", largest);
}