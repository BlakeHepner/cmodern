#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])\
{
  int sum = 0, count;
  
  for (count = 0; count < argc; count++)
  {
    sum += atoi(argv[count]);
  }
  printf("%d", sum);
  printf("\n");
  return 0;
}