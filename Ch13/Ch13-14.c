#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_INPUT_LENGTH 80

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
  char word1[MAX_INPUT_LENGTH] = {0}, word2[MAX_INPUT_LENGTH] = {0};
  
  printf("Enter first word: ");
  fgets(word1, MAX_INPUT_LENGTH, stdin);
  
  printf("Enter second word: ");
  fgets(word2, MAX_INPUT_LENGTH, stdin);
  
  if (are_anagrams(word1, word2))
  {
    printf("The words are anagrams.\n");
    return 0;
  }
  else
  {
    printf("The words are not anagrams.\n");
    return 1;
  }
  return 2;
}

bool are_anagrams(const char *word1, const char *word2)
{
  int alphabet[26] = {0};
  
  for (int i = 0; i < MAX_INPUT_LENGTH; i++)
  {
    if (isalpha(word1[i]))
      alphabet[(tolower(word1[i]) - 'a')] -= 1;
    if (isalpha(word2[i]))
      alphabet[(tolower(word2[i]) - 'a')] += 1;
  }
  
  for (int m = 0; m < 26; m++)
  {
    if (alphabet[m] != 0) return false;
  }
  return true;
}