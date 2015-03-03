/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9
#define MAX_INPUT_SIZE 20 //Exceeding this size can result in comparisons only comparing the first MAX_INPUT_SIZE characters and dropping the rest!

int main(int argc, char *argv[])
{
  char *planets[] = {"mercury", "venus", "earth",
                     "mars", "jupiter", "saturn",
                     "uranus", "neptune", "pluto" };
                     //Ensure all planet names are lower case!
  
  int i, j;
  
  for (i = 1; i < argc; i++)
  {
    char input[MAX_INPUT_SIZE];
    strcpy(input, argv[i]);
    for (int m = 0; m < MAX_INPUT_SIZE; m++) //This iterates through user input to make their input lowercase for comparison sake, without affecting how it will be displayed to the user.
    {
      input[m] = tolower(input[m]);
    }
    for (j = 0; j < NUM_PLANETS; j++)
    {
      if (strcmp(input, planets[j]) == 0)
      {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }
  return 0;
}