/*

*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
  int counts1[26] = { 0 };
  int counts2[26] = { 0 };
  
  printf("Enter first word: ");
  read_word(counts1);
  
  printf("Enter second word: ");
  read_word(counts2);
/*
  for(int i = 0; i < 26; i++)
  {
    if (alphabet[i] != 0)
    {
      printf("The words are not anagrams.\n");
      return 1;
    }
  }
  printf("The words are anagrams.\n");
  return 0;
*/

  if (equal_array(counts1, counts2))
  {
    printf("The words are anagrams.\n");
    return 0;
  }
  else
  {
    printf("The words are not anagrams.\n");
    return 1;
  }
}

void read_word(int counts[26])
{
  char ch;
  
  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
    {
      ch = tolower(ch);
      counts[(ch - 'a')] += 1;
    }
    else
      printf("Warning: Non-alpha characters are not accounted for!\n");
  }
}

bool equal_array(int counts1[26], int counts2[26])
{
  for (int i = 0; i < 26; i++)
  {
    if (counts1[i] == counts2[i])
      continue;
    else
      return false;
  }
  return true;
}