#include <stdio.h>

int total, twentybill, tenbill, fivebill, onebill;

int main(void)
{
  printf("Enter a dollar amount: ");
  scanf("%d", &total);
  twentybill = total / 20;
  tenbill = (total - (twentybill * 20)) / 10;
  fivebill = (total - (twentybill * 20) - (tenbill * 10)) / 5;
  onebill = (total - (twentybill * 20) - (tenbill * 10) - (fivebill * 5)) / 1;
  printf("\n");
  printf("$20 bills: %d\n", twentybill);
  printf("$10 bills: %d\n", tenbill);
  printf(" $5 bills: %d\n", fivebill);
  printf(" $1 bills: %d\n", onebill);
  return 0;
}

