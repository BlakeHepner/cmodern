#include <stdio.h>

#define MAX_MSG 80

void encrypt(char *message, int shift);

int main(void)
{
  char message[MAX_MSG];
  int shift;
  
  printf("Enter message to be encrypted: ");
  fgets(message, MAX_MSG, stdin);
  
  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);
  encrypt(message, shift);
  printf("Encrypted message: %s\n", message);
}

void encrypt(char *message, int shift)
{
  for (; *message != '\0'; message++)
  {
    if (*message >= 'A' && *message <= 'Z')
      *message = ((*message - 'A' + shift) % 26 + 'A');
    else if (*message >= 'a' && *message <= 'z')
      *message = ((*message - 'a' + shift) % 26 + 'a');
    else if (*message == '\n')
    {
      *message = '\0';
      break;
    }
  }
  
  
  /*
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
  */
}