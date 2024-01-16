
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Date 
{ 
 int day;  
 int month;  
 int year; 
}; 
int compare(struct Date d1, struct Date d2) 
{ 
 if (d1.year < d2.year) 
       return 1; 
 if (d1.year == d2.year && d1.month < d2.month) 
        return 1; 
 if (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day) 
        return 1; 
 return 0; 
}

void selectSort(struct Date dates[], int itemCount)
{
    int i, j, minIdx;
    struct Date temp;

    for (i = 0; i < itemCount; i++)
    {
        minIdx = i;

        for (j = i + 1; j < itemCount; j++)
        {
            struct Date d1 = dates[j];
            struct Date d2 = dates[minIdx];

            if (compare(d1, d2))
            {
                minIdx = j;
            }
        }

        if (minIdx != i)
        {
            temp = dates[i];
            dates[i] = dates[minIdx];
            dates[minIdx] = temp;
        }
    }
}


int main(void)
{
 struct Date dates[5] = {{23,5,1984},{27, 11, 1983}, {22, 05, 1983}, {27, 11, 1986},{27, 11, 1985}};
 selectSort(dates, 5);
  for(int i = 0;i<5;i++){
      printf("%d-%d-%d\n", dates[i].year,dates[i].month,dates[i].day);
    }      
    return 0;
}


