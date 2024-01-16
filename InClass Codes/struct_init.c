#include <stdio.h>

// declare the Student struct
struct Student
{
	int id;
	int birthYear, birthMonth, birthDay;
	double grade;
};

int main(void)
{
	struct Student student1 = {
		123, 1997, 4, 17, 73.1
	};	// create an instance of the Student struct and initialize it
	struct Student student2 = {
		456, 1996, 7, 11, 81.7
	};	// create a second instance

	// use the dot notation to access the contents
	printf("Student1: id=%d, birth=%d/%d/%d, grade=%.2lf\n",
		student1.id, student1.birthYear, student1.birthMonth,
		student1.birthDay, student1.grade);
	printf("Student2: id=%d, birth=%d/%d/%d, grade=%.2lf\n",
		student2.id, student2.birthYear, student2.birthMonth,
		student2.birthDay, student2.grade);

	// use dot notation to modify one field in student 1
	student1.grade = 77.77;
	// assign student2 the value of student1
	student2 = student1;
	// print the new value of student2
	printf("Student2: id=%d, birth=%d/%d/%d, grade=%.2lf\n",
		student2.id, student2.birthYear, student2.birthMonth,
		student2.birthDay, student2.grade);

	return 0;
}