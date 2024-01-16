// Debugging Example
// debug.c

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
  int total, value, count;

  total = 0;
  count = 0;
  do {
      printf("Enter a value (0 to stop) ");
      scanf("%d", &value);

      if (value < 0)
      {
          total -= value;
          count++;
      }
      else if (value > 0)
      {
          total += value;
          count++;
      }
  } while (value != 0);

  if (count > 0)
  {
      printf("The average value is %.2lf\n",
             (double)total/count);
  }
  return 0;
}