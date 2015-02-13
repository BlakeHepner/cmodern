#include <stdio.h>

int x, solution;

int main(void)
{
  printf("Please enter a whole number for x: ");
  scanf("%d", &x);
  solution = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
  printf("Solution: %d\n", solution);
  return 0;
}