#include <stdio.h>
#define PI 3.141593f

float radius = 10, volume = 0;
//Radius is measured in meters
//Volume is being initialized, value doesn't matter

int main(void)
{
  volume = (4.0f/3.0f) * PI * (radius * radius * radius);
  printf("%f\n", volume);
  return 0;
}