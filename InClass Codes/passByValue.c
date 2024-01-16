// Passing a structure to a function
// pass_by_value.c

#include <stdio.h>

struct Student
{
    int no;
    int no_grades_filled;
    float grade[4];
};

void display(const struct Student s);  // pass by value

int main(void)
{
    struct Student harry = {975, 3,
         {75.6f, 82.3f, 68.9f, 0.0f}};

    display(harry);
}

void display(const struct Student st)
{
    int i;
    printf("Grades for %d\n", st.no);

    for (i = 0; i < st.no_grades_filled; i++)
    {
        printf("%.1f\n", st.grade[i]);
    }
}