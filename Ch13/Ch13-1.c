#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 20

int main(int argc, char *argv[])
{
  char smallest_word[MAX_WORD_LENGTH], largest_word[MAX_WORD_LENGTH], input[MAX_WORD_LENGTH];
  
  for(;;)
  {
    printf("Enter word: ");
    scanf("%s", input);
    if (strcmp(input, smallest_word) < 0)
      strcpy(smallest_word, input);
    if (strcmp(input, largest_word) > 0)
      strcpy(largest_word, input);
    if (strlen(input) == 4)
      break;
  }
  
  printf("Smallest word: %s\n", smallest_word);
  printf("Largest word: %s\n", largest_word);
  
  return 0;
}