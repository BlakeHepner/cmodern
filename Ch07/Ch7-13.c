/*
outer loop does getchar while loop until \n
inner loop goes getchar while loop until ' '
inner loop counts up a counter for letter count in word
outer loop increments a counter for word count
outer loop adds

scratch the above

have loop do get char until \n
have it skip adding to letter count if character is a space.
for every space skipped, add to a different counter to keep track of word count.
*/

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