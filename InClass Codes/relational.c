#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int adult, child, senior, employed, workingAdult;

	a = 1;

	c = a == 1;		// true because a is equal to 1
	printf("a == 1 is %d\n", c); 

	c = a > 1;		// false because a is equal to 1
	printf("a > 1 is %d\n", c);

	// other relational operators <, >, <=, >=, ==, !=

	child = 0;
	senior = 0;

	adult = !child && !senior;
	printf("If child=%d and senior=%d, then adult=%d\n", child, senior, adult);

	child = 1;
	adult = !child && !senior;
	printf("If child=%d and senior=%d, then adult=%d\n", child, senior, adult);

	child = 0;
	adult = !(child || senior);		// DeMorgan's theorem
	printf("If child=%d and senior=%d, then adult=%d\n", child, senior, adult);

	employed = 1;
	workingAdult = !(child || senior) && employed;
	printf("If child=%d and senior=%d, employed=%d, then employedAdult=%d\n", 
		child, senior, employed, adult);

	// precendence is !, &&, ||
	return 0;
}