#include <stdio.h>

int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, sum1, sum2, total, checkdigit;

int main(void)
{
  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
  
  sum1 = n1 + n3 + n5 + n7 + n9 + n11;
  sum2 = n2 + n4 + n6 + n8 + n10;
  total = 3 * sum1 + sum2;
  checkdigit = 9 - ((total - 1) % 10);
  
  printf("Check digit: %d\n", checkdigit);
  return 0;
}