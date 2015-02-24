#include <stdio.h>
/*
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
*/
void reduce(int, int, int *, int *);

int main(void)
{
  int numerator, denominator, reduced_numerator, reduced_denominator;
  
  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);
  
  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
  
  printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
  int temp;
  *reduced_numerator = numerator;
  *reduced_denominator = denominator;
  
  for(;;)
  {
    if(denominator == 0) break;
    temp = numerator % denominator;
    numerator = denominator;
    denominator = temp;
  }
  
  *reduced_numerator /= numerator;
  *reduced_denominator /= numerator;
}