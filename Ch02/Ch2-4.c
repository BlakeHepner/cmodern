#include <stdio.h>

float tax = .05;
float amount;

int main(void)
{
  printf("Enter an amount: ");
  scanf("%f", &amount);
  amount = amount + (amount * tax);
  printf("With tax added: %.2f\n", amount);
  return 0;
}