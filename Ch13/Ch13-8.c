#include <stdio.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 20

int compute_scrabble_value(const char *word);

int main(void)
{
  int score;//holds total score
  char word[MAX_WORD_LENGTH + 1];
  
  printf("Enter a word: ");
  fgets(word, MAX_WORD_LENGTH + 1, stdin);
  
  score = compute_scrabble_value(word);

  printf("Scrabble value is: %d\n", score);
  return 0;
}

int compute_scrabble_value(const char *word)
{
  int sum = 0;
  for(int i = 0; i < MAX_WORD_LENGTH; i++)
  {
    if (isalpha(word[i]))
    {
      switch (toupper(word[i]))
      {
        case 'D':
        case 'G': sum += 2; break;
        case 'B':
        case 'C':
        case 'M':
        case 'P': sum += 3; break;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y': sum += 4; break;
        case 'K': sum += 5; break;
        case 'J':
        case 'X': sum += 8; break;
        case 'Q':
        case 'Z': sum += 10; break;
        default: sum += 1; break;
      }
    }
  }
  return sum;
}