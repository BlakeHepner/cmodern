#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
bool is_match(char);
void failed_match(void);

int main(void)
{
  char input;
  printf("Enter parentheses and/or braces: ");
  while ((input = getchar()) != '\n')
  {
    switch(input)
    {
      case '(':
      case '{':
      case '[':
      case '<':
        push(input);
        break;
      case ')':
        if(is_match('('))
          break;
        else
          failed_match();
      case '}':
        if(is_match('{'))
          break;
        else
          failed_match();
      case ']':
        if(is_match('['))
          break;
        else
          failed_match();
      case '>':
        if(is_match('<'))
          break;
        else
          failed_match();
      default:
        printf("Invalid input. Ignoring \"%c\"\n", input);
        break;
    }
  }
  
  if (is_empty())
  {
    printf("Parentheses/braces are nested properly.\n");
    exit(0);
  }
  else
    failed_match();
  
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(char i)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}

char pop(void)
{
  if (is_empty())
    stack_underflow();
  else
    return contents[--top];
}

void stack_underflow(void)
{
  failed_match();
}

void stack_overflow(void)
{
  printf("Stack overflow");
  exit(4);
}

bool is_match(char input)
{
  if (pop() == input)
    return true;
  else
    failed_match();
}

void failed_match(void)
{
  printf("Parentheses/braces are not nested properly.\n");
  exit(1);
}