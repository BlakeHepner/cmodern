//Enter a first and last name:

//Hepner, B.
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 20

void reverse_name(char *name);

int main(void)
{
  char input[MAX_NAME_LENGTH];
  
  printf("Enter a first and last name: ");
  fgets(input, MAX_NAME_LENGTH, stdin);
  
  reverse_name(input);
  
  printf("%s", input);
  printf("\n");
  return 0;
}

void reverse_name(char *name)
{
  char first[MAX_NAME_LENGTH], last[MAX_NAME_LENGTH];
  
  sscanf(name, " %s %s ", first, last);
  
  strcpy(name, last);
  strcat(name, ", ");
  strncat(name, first, 1);
  strcat(name, ".");
}