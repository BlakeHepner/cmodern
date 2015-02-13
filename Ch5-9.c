#include <stdio.h>

int main(void)
{
  int d1, d2, m1, m2, y1, y2, winner;
  // day 1/2, month 1/2, year 1/2, winner flag determines outcome
  // winner == 1 == 1st date earlier
  // winner == 2 == 2nd date earlier
  // winner == 3 == tied
  
  printf("Enter first date (mm/dd/yy): ");
  scanf("%2d/%2d/%2d", &m1, &d1, &y1);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%2d/%2d/%2d", &m2, &d2, &y2);
  
  if (y1 < y2) winner = 1;
  
  else if (y2 < y1) winner = 2;
    
  else // if (y2 == y1)
    {
      if (m1 < m2) winner = 1;
      
      else if (m2 < m1) winner = 2;
      
      else // if (m2 == m1)
        {
          if (d1 < d2) winner = 1;
          
          else if (d2 < d1) winner = 2;
          
          else winner = 3;
        }
    }
    
  if (winner == 1)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
  else if (winner == 2)
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1);
  else
    printf("The dates are the same!\n");
  
  return 0;
}