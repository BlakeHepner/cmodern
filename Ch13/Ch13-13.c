#include <stdio.h>

#define MAX_MSG 80

int main(void)
{
  char message[MAX_MSG];
  int msglength, shift;
  
  printf("Enter message to be encrypted: ");
  for (msglength = 0; msglength < MAX_MSG; msglength++)
  {
    if ((message[msglength] = getchar()) == '\n') break;
  }
  
  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);
  
  printf("Encrypted message: ");
  
  for (int i = 0; i < msglength; i++)
  {
    if (message[i] >= 'A' && message[i] <= 'Z')
      //putchar(message[i]);
      putchar(((message[i] - 'A') + shift) % 26 + 'A');
    else if (message[i] >= 'a' && message[i] <= 'z')
      //putchar(message[i]);
      putchar(((message[i] - 'a') + shift) % 26 + 'a');
    else //if any other type of character
      putchar(message[i]);
  }
  printf("\n");
}