#include <stdio.h>

int main(void)
{
  int grade;
  
  printf("Enter numerical grade (0 - 100): ");
  scanf("%d", &grade);
  
  if (grade > 100 || grade < 0)
  {
    printf("You entered an invalid grade of %d!\n", grade);
    return 1;
  }
  
  printf("Letter grade: ");
  
  //A == 100-90
  //B ==  89-80
  //C ==  79-70
  //D ==  69-60
  //F ==  59-0
  
  switch (grade / 10)
  {
    case 10:
    case 9: printf("A"); break;
    case 8: printf("B"); break;
    case 7: printf("C"); break;
    case 6: printf("D"); break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0: printf("F"); break;
  }
  
  printf("\n");
  return 0;
}