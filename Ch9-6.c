#include <stdio.h>

int polynomial(int);

int main(void)
{
  int input, answer;
  
  printf("Please enter a value for x: ");
  scanf("%d", &input);
  
  answer = polynomial(input);
  
  printf("The result of the polynomial is: %d\n", answer);
  return 0;
}

int polynomial(int x)
{
  return ((3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6);
}