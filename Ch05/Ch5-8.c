#include <stdio.h>

//Departure Time  Arrival Time
//8:00 am         10:16 am
//9:43 am         11:52 am
//11:19 am        1:31 pm
//12:47 pm        3:00 pm
//2:00 pm         4:08 pm
//3:45 pm         5:55 pm
//7:00 pm         9:20 pm
//9:45 pm         11:58 pm
int main(void)
{
  int hours, minutes, totaltime, t, u, x, y;
  
  int a = 480,
  
  //Prompt for time
  
  printf("Enter a 24 hour time (hh:mm): ");
  scanf("%d:%d", &hours, &minutes);
  
  totaltime = hours * 60 + minutes;
  
  printf("Closest departure time is ");
  
  if (totaltime <= a)
    printf("8:00am");
  else
    if (totaltime > a && totaltime <= b)
      {
        t = totaltime - a;
        u = b - totaltime;
      }
}