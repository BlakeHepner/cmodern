#include <stdio.h>

int month, day, year;

int main(void)
{
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You entered the date %d%.2d%.2d\n", year, month, day);
  return 0;
}