#include <stdio.h>

struct Student
{
	int id;
	double grade;
};

struct StudentMultiMarks
{
	int id;
	int nMarks;
	double grades[10];
};

int main(void)
{
	struct Student singleGradeClass[] =
	{
		{123, 77.1},
		{456, 82.4},
		{789, 65.7}
	};

	struct StudentMultiMarks multiClass[] =
	{
		{222, 3, {44.8, 63.4, 77.1}},
		{333, 2, {87.4, 81.5}},
		{444, 2, {74.3, 71.2}}
	};
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("id=%d, grade=%.2lf\n", singleGradeClass[i].id, singleGradeClass[i].grade);
	}

	printf("Multi-grade students\n");
	for (i = 0; i < 3; i++)
	{
		printf("id=%d, grades=", multiClass[i].id);
		for (j = 0; j < multiClass[i].nMarks; j++)
			printf("%.2lf ", multiClass[i].grades[j]);
		printf("\n");
	}

	return 0;
}