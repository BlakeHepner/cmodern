#include <stdio.h>

int main(void)
{
  int m, n, temp;
  
  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);
  //The following "for" statement is Euclid's algorithm for calculating GCD (greatest common divisor)
  for(;;)
    {
      if (n == 0) break;
      temp = m % n;
      m = n;
      n = temp;
    }
  printf("Greatest common divisor: %d\n", m);
  return 0;
}