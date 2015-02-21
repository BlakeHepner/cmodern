#include <stdio.h>

int main(void)
{
  char op1, op2;
  float val1, val2, val3, presult, fresult;
  
  //val1,2,3 are the input values
  //presult == partial result
  //fresult == final result
  
  printf("Enter an expression (#+#-#): ");
  scanf("%f%c%f%c%f", &val1, &op1, &val2, &op2, &val3);
  
  switch(op1)
    {
      case '+': presult = val1 + val2; break;
      case '-': presult = val1 - val2; break;
      case '*': presult = val1 * val2; break;
      case '/': presult = val1 / val2; break;
      default: printf("No operator in slot 1! Error!\n"); return 1;
    }
  
  switch (op2)
    {
      case '+': fresult = presult + val3; break;
      case '-': fresult = presult - val3; break;
      case '*': fresult = presult * val3; break;
      case '/': fresult = presult / val3; break;
      default: printf("No operator in slot 2! Error!\n"); return 2;
    }
  
  printf("Value of expression: %f\n", fresult);
  return 0;
  
}