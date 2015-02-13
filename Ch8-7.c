#include <stdio.h>

#define DIMENSION 6

int main(void)
{
  int array[DIMENSION][DIMENSION];
  int x, y;
  int rowtotal = 0, coltotal = 0;
  
  for(y = 0; y < DIMENSION; y++)
    {
      printf("Enter row %d: ", y + 1);
      for(x = 0; x < DIMENSION; x++)
        scanf("%d", &array[y][x]);
    }
  
  printf("Row totals: ");
  for(y = 0; y < DIMENSION; y++)
    {
      for (x = 0, rowtotal = 0; x < DIMENSION; x++)
        {
          rowtotal += array[y][x];
        }
      printf("%d ", rowtotal);
    }
  printf("\n");
  
  printf("Column totals: ");
  for(x = 0; x < DIMENSION; x++)
    {
      for (y = 0, coltotal = 0; y < DIMENSION; y++)
        {
          coltotal += array[y][x];
        }
      printf("%d ", coltotal);
    }
  printf("\n");
  
  return 0;
}