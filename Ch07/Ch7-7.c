/* Adds, subtracts, multiples or divides two fractions */

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  
  char oper;
  
  //printf("Enter first fraction: ");
  //scanf("%d/%d", &num1, &denom1);
  
  //printf("Enter second fraction: ");
  //scanf("%d/%d", &num2, &denom2);
  
  printf("Enter two fractions seperated by a plus sign: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &oper, &num2, &denom2);
  
  switch (oper) {
    case '+':
      result_num = num1 * denom2 + num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The sum is %d/%d\n", result_num, result_denom);
      break;
    case '-':
      result_num = num1 * denom2 - num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The sum is %d/%d\n", result_num, result_denom);
      break;
    case '/': //I can't math
      result_num = num1 * denom2 / num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The sum is %d/%d\n", result_num, result_denom);
      break;
    case '*': //I can't math
      result_num = num1 * denom2 * num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The sum is %d/%d\n", result_num, result_denom);
      break;
  
  return 0;
      
  }
  
  
  
  return 0;
}