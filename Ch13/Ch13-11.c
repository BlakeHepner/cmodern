#include <stdio.h>

#define MAX_INPUT_LENGTH 80

double compute_average_word_length(const char *sentence);

int main(void)
{
  double average = 0;
  char input[MAX_INPUT_LENGTH];
  //ch == current character
  //letterc == letter count
  //wordc == word count
  
  printf("Enter a sentence: ");
  fgets(input, MAX_INPUT_LENGTH, stdin);
  
  average = compute_average_word_length(input);

  printf("Average word length: %.1f\n", average);
  return 0;
  
}

double compute_average_word_length(const char *sentence)
{
  int lettercount = 0, wordcount = 1;
  double average;
  
  for (; *sentence != '\0' && *sentence != '\n'; sentence++)
  {
    if (*sentence == ' ')
      wordcount++;
    else
      lettercount++;
  }
  
  average = (double) lettercount / (double) wordcount;
  
  return average;
}