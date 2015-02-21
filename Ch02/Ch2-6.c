#include <stdio.h>

int x, solution;

int main(void)
{
  printf("Please enter a whole number for x: ");
  scanf("%d", &x);
  solution = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("Solution: %d\n", solution);
  return 0;
}