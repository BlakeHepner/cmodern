#include <stdio.h>

int main(void)
{
  int input, output;
  
  printf("Please enter a number: ");
  scanf("%d", &input);
  
  do {
    output = input % 10;
    printf("%d", input % 10);
    input /= 10;
  } while (input != 0);
  printf("\n");
  return 0;
}