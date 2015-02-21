#include <stdio.h>

int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

int row1, row2, row3, row4;
int col1, col2, col3, col4;
int diag1, diag2;

int main(void)
{
  printf("Enter the numbers from 1 to 16 in any order: \n");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);
  printf("\n");
  
  //The following prints out the 4 x 4 block of numbers
  printf("%2d %2d %2d %2d\n", one, two, three, four);
  printf("%2d %2d %2d %2d\n", five, six, seven, eight);
  printf("%2d %2d %2d %2d\n", nine, ten, eleven, twelve);
  printf("%2d %2d %2d %2d\n", thirteen, fourteen, fifteen, sixteen);
  
  row1 = one + two + three + four;
  row2 = five + six + seven + eight;
  row3 = nine + ten + eleven + twelve;
  row4 = thirteen + fourteen + fifteen + sixteen;
  
  col1 = one + five + nine + thirteen;
  col2 = two + six + ten + fourteen;
  col3 = three + seven + eleven + fifteen;
  col4 = four + eight + twelve + sixteen;
  
  diag1 = one + six + eleven + sixteen;
  diag2 = four + seven + ten + thirteen;
  
  printf("\n");
  
  printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
  printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
  printf("Diagonal sums: %d %d\n", diag1, diag2);
  
  return 0;
}