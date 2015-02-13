#include <stdio.h>

int gs1, groupid, publishercode, itemcode, checkdigit;

int main(void)
{
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &groupid, &publishercode, &itemcode, &checkdigit);
  printf("GS1 prefix: %d\n", gs1);
  printf("Group identifier: %d\n", groupid);
  printf("Publisher code: %d\n", publishercode);
  printf("Item number: %d\n", itemcode);
  printf("Check digit: %d\n", checkdigit);
  return 0;
}