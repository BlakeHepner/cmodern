#include <stdio.h>

int item;
float price;
int month, day, year;

int main(void)
{
  printf("Enter item number: ");
  scanf("%d", &item);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  
  printf("Item\tUnit\tPurchase\n");
  printf(" \tPrice\tDate\n");
  //The above should print:
  //Item        Unit        Purchase
  //            Price       Date
  printf("%d\t$%-.2f\t%.2d/%.2d/%.4d\n", item, price, month, day, year);
  //The above, as an example, should print:
  //123         $  10.50    01/01/2014
  return 0;
}