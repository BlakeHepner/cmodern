/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* Maximum number of reminders */
#define MSG_LEN 60 /* Max length of reminder message */

int read_line(char str[], int n);

int main(int argc, char *argv[])
{
  char reminders[MAX_REMIND][MSG_LEN+8];
  char day_str[3], msg_str[MSG_LEN+1], time_str[5];
  int day, hourmin, i, j, num_remind = 0;
  
  for(;;)
  {
    if (num_remind == MAX_REMIND) //Stops user from overflowing array
    {
      printf("-- No space left --\n");
      break;
    }
    
    printf("Enter day, time(HHMM) and reminder: ");
    scanf("%2d %4d", &day, &hourmin);
    if (day == 0)
      break;
    else if (day > 31 || day < 0) //Error checking for date field
    {
      printf("Error! You entered an invalid day of the month. You entered: %d\n", day);
      continue;
    }
    
    if (hourmin > 2400 || hourmin < 0) //Error checking for time field
    {
      printf("Invalid time! You entered %d. Valid values are 0-2400.\n", hourmin);
      continue;
    }
    
    sprintf(day_str, "%2d", day);
    sprintf(time_str, "%4d", hourmin);
    read_line(msg_str, MSG_LEN);
    
    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j-1]);
    
    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);
    
    num_remind++;
  }
  
  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);
  
  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;
  
  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}