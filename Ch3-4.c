#include <stdio.h>

int areacode, firstphone, lastphone;

int main(void)
{
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &areacode, &firstphone, &lastphone);
  printf("You entered %.3d.%.3d.%.4d\n", areacode, firstphone, lastphone);
  return 0;
}