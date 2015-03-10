#include <stdio.h>

int main(void)
{
  char ch;
  int letterc = 0, wordc = 1;
  float average;
  
  //ch == current character
  //letterc == letter count
  //wordc == word count
  
  printf("Enter a sentence: ");
  
  while((ch = getchar()) != '\n')
    {
      if (ch == ' ')
        wordc++;
      else
        letterc++;
    }
  
  average = (float) letterc / (float) wordc;
  
  printf("Average word length: %.1f\n", average);
  return 0;
  
}