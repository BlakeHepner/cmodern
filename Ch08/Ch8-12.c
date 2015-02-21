#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int sum = 0, numletter; //holds total score and selects correct score from alpha array
  char ch; //holds user input
  int alpha[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
/*
a1 b3 c3 d2 e1 f4 g2 h4 i1 j8 k5 l1 m3 n1 o1 p3 q10 r1 s1 t1 u1 v4 w4 x8 y4 z10
*/

  printf("Enter a word: ");
  
  while ((ch = getchar()) != '\n')
    {
      numletter = toupper(ch) - 'A';
      sum += alpha[numletter];
    }
  printf("Scrabble value: %d\n", sum);
  return 0;
}
