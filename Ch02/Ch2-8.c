#include <stdio.h>

float loan, yearlyinterest, monthlypayment, monthlyinterest, firstpay, secondpay, thirdpay;

int main(void)
{
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &yearlyinterest);
  printf("Enter monthly payment: ");
  scanf("%f", &monthlypayment);
  
  monthlyinterest = 1 + (yearlyinterest / 1200);
  
  firstpay = loan - monthlypayment;
  secondpay = (firstpay * monthlyinterest) - monthlypayment;
  thirdpay = (secondpay * monthlyinterest) - monthlypayment;
  
  printf("Balance remaining after first payment: $%.2f\n", firstpay);
  printf("Balance remaining after second payment: $%.2f\n", secondpay);
  printf("Balance remaining after third payment: $%.2f\n", thirdpay);
  return 0;
}