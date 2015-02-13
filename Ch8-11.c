#include <stdio.h>
#include <ctype.h>

#define MAX_PHONE_NUM 15

int main(void)
{
  char ch, phone[MAX_PHONE_NUM];
  int number, print;
  
  
  printf("Enter phone number: ");
  
  for (number = 0; number < MAX_PHONE_NUM; number++)
  {
    if ((ch = getchar()) == '\n') break;
    phone[number] = ch;
  }
  
  printf("In numeric form: ");
  for (print = 0; print <= number; print++)
  {
    switch (phone[print])
    {
      case 'A':
      case 'B':
      case 'C': putchar('2'); break;
      case 'D':
      case 'E':
      case 'F': putchar('3'); break;
      case 'G':
      case 'H':
      case 'I': putchar('4'); break;
      case 'J':
      case 'K':
      case 'L': putchar('5'); break;
      case 'M':
      case 'N':
      case 'O': putchar('6'); break;
      case 'P':
      case 'Q':
      case 'R':
      case 'S': putchar('7'); break;
      case 'T':
      case 'U':
      case 'V': putchar('8'); break;
      case 'W':
      case 'X':
      case 'Y':
      case 'Z': putchar('9'); break;
      default: putchar(phone[print]); break;
    }
  }
  
  printf("\n");
  return 0;
  
}