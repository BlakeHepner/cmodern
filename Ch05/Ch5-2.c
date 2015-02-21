#include <stdio.h>

int hour, minutes, pm;

//pm is a true/false value 0 = am, 1 = pm.

int main(void)
{
  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hour, &minutes);
  
  if (hour == 0 || hour == 24)
    {
      hour = 12;
      pm = 0;
    }
  else if (hour <= 11 && hour >= 1)
    {
      pm = 0;
    }
  else if (hour <= 23 && hour >= 13)
    {
      pm = 1;
      hour -= 12;
    }
  else if (hour == 12)
    {
      pm = 1;
    }
  else
    {
      printf("Error! Invalid input for hour. You input %d.\n", hour);
      return 1;
    }
  
  if (minutes < 0 || minutes > 59)
    {
      printf("Error! Invalid input for minutes. You input %d.\n", minutes);
    }
  
  if (pm == 0)
    {
    printf("Equivalent 12-hour time: %2d:%2d AM\n", hour, minutes);
    return 0;
    }
  if (pm == 1)
    {
    printf("Equivalent 12-hour time: %2d:%2d PM\n", hour, minutes);
    return 0;
    }
  
  printf("Something is majorly wrong, this should not print! Somehow, pm variable got set to something other than 0 or 1!\n");
  return 1;
  
}