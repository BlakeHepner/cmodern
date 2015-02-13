#include <stdio.h>

int main(void)
{
  int speed;
  
  printf("Please enter a wind speed in knots: ");
  scanf("%d", &speed);
  
  if (speed < 1)
    printf("The air description is Calm.\n");
  else if (speed <= 3)
    printf("The air description is Light air.\n");
  else if (speed <= 27)
    printf("The air description is Breeze.\n");
  else if (speed <= 47)
    printf("The air description is Gale.\n");
  else if (speed <= 63)
    printf("The air description is Storm.\n");
  else
    printf("The air description is Hurricane.\n");
    
  return 0;
}