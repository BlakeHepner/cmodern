#include <stdio.h>

int main(void)
{
  int top, bottom, m, n, temp;
  
  printf("Enter a fraction: ");
  scanf("%d/%d", &top, &bottom);
  //The following "for" statement is Euclid's algorithm for calculating GCD (greatest common divisor)
  
  m = top;
  n = bottom;
  
  for(;;)
    {
      if (n == 0) break;
      temp = m % n;
      m = n;
      n = temp;
    }
    
  top /= m;
  bottom /= m;
  
  printf("In lowest terms: %d/%d\n", top, bottom);
  return 0;
}