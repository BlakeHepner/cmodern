#include <stdio.h>

#define N 10

#define ARRAY ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
  int a[N], i;
  
  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);
    
  printf("In reverse order:");
  for (i = ARRAY - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");
  
  return 0;
}