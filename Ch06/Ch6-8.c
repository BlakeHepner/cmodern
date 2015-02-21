#include <stdio.h>

int main(void)
{
  int i, days, start;
  //i is used for counting
  //days is used to contain the number of days in the month
  //start is used to contain what the start day of the month is
  
  printf("Enter numbers of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);
  
  for(i = 1; i < start; i++)
    {
      printf("   ");
    }
    
  for(i = 1; i <= days; i++)
    {
      printf("%3d", i);
      if ((start + i - 1) % 7 == 0)
      printf("\n");
    }
    printf("\n");
    return 0;
}