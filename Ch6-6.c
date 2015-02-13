#include <stdio.h>

int main(void)
{
  int n;
  
  printf("Please enter a number: ");
  scanf("%d", &n);
  
  for (int even = 4, square = 4; square <= n; even += 2)
    {
      printf("%d\n", square);
      
      square = even * even;
    }
  return 0;
}