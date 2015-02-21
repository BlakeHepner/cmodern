#include <stdio.h>

#define QUIZ_MAX 5
#define STUDENT_MAX 5
//It is recommended both defines are set to the same number to prevent issues.
//A value of 5 is the default.


int main(void)
{
  int array[STUDENT_MAX][QUIZ_MAX];
  int quiz, student;
  int stutotal, quiztotal, high, low;
  
  for(student = 0; student < STUDENT_MAX; student++)
    {
      printf("Enter quiz grades for student %d: ", student + 1);
      for(quiz = 0; quiz < QUIZ_MAX; quiz++)
        scanf("%d", &array[student][quiz]);
    }
    
  printf("\n");
  
  for (student = 0; student < STUDENT_MAX; student++)
    {
      for (quiz = 0, stutotal = 0; quiz < QUIZ_MAX; quiz++)
        {
          stutotal += array[student][quiz];
        }
      printf("Student %.2d Total: %d\n", student + 1, stutotal);
      printf("         Average: %d\n", stutotal / quiz);
    }
  
  printf("\n");
  
  for (quiz = 0; quiz < QUIZ_MAX; quiz++)
    {
      for (student = 0, quiztotal = 0, high = 0, low = 100; student < STUDENT_MAX; student++)
        {
          quiztotal += array[student][quiz];
          if (high < array[student][quiz])
            high = array[student][quiz];
          if (low > array[student][quiz])
            low = array[student][quiz];
        }
      printf("Quiz %.2d Average: %d\n", quiz + 1, quiztotal / student);
      printf("            Min: %d\n", low);
      printf("            Max: %d\n", high);
    }
/*  printf("Row totals: ");
  for(y = 0; y < HEIGHT; y++)
    {
      for (x = 0, rowtotal = 0; x < QUIZ; x++)
        {
          rowtotal += array[y][x];
        }
      printf("%d ", rowtotal);
    }
  printf("\n");
  
  printf("Column totals: ");
  for(x = 0; x < QUIZ; x++)
    {
      for (y = 0, coltotal = 0; y < HEIGHT; y++)
        {
          coltotal += array[y][x];
        }
      printf("%d ", coltotal);
    }
  printf("\n");
*/
  return 0;
}