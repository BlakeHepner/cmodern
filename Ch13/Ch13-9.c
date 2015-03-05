#include <stdio.h>
#include <ctype.h>

#define MAX_INPUT_COUNT 40

int compute_vowel_count(const char *sentence);

int main(void)
{
  int vowel = 0;
  char sentence[MAX_INPUT_COUNT];
  
  printf("Enter a sentence: ");
  fgets(sentence, MAX_INPUT_COUNT, stdin);
  vowel = compute_vowel_count(sentence);
  printf("Your sentence contains %d vowels.\n", vowel);
  return 0;
}

int compute_vowel_count(const char *sentence)
{
  int vowel = 0;
  for(int i = 0; sentence[i] != '\0'; i++)
  {
    switch (toupper(sentence[i]))
    {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': vowel++; break;
      default: break;
    }
  }
  return vowel;
}