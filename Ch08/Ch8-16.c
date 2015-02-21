#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int alphabet[26] = { 0 };
  char ch;
  
  printf("Enter first word: ");
  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
    {
      ch = tolower(ch);
      alphabet[(ch - 'a')] += 1;
    }
    else
      printf("Warning: Non-alpha characters are not accounted for!\n");
  }
  
  printf("Enter second word: ");
  while((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
    {
      ch = tolower(ch);
      alphabet[(ch - 'a')] -= 1;
    }
    else
      printf("Warning: Non-alpha characters are not accounted for!\n");
  }
  
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
}