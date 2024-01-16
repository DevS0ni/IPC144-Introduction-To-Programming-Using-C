#include <stdio.h>
#include <string.h>

#define NAME_LEN 30

struct Student
{
    int student_id;
    char student_name[NAME_LEN];
    char program[NAME_LEN];
};


int main(void)
{

 struct Student students[7] = { {0} };

   int i = 0;
   char ch;
   FILE *fp = fopen("week13.txt","r");
  int scan = 1;
 
 if (fp != NULL)
    {
        while (i< 7 && scan)
        {   
            scan = fscanf(fp, "%d|%30[^\n]s|%30[^\n]s%c", &students[i].student_id,students[i].student_name ,students[i].program, &ch) == 2;

            if(ch!='\n'){
                while(fgetc(fp)!='\n')        ;
            }
            i++;
        }
 
        fclose(fp);
        fp = NULL;
    }
    else
    {
        printf("Failed to open file\n");
    }
    for(int i=0;i<7;i++){
        printf("%d|%s|%s\n", students[i].student_id, students[i].student_name,students[i].program);
    }
    
    return 0;
}

