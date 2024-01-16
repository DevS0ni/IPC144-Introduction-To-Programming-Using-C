#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, option = 0, c = 10;

	////////////////////////////////////////////////////////////
	// simple if based on one condition
	////////////////////////////////////////////////////////////
	if (a > 5)
	{
		printf("a(%d) is greater than 5\n", a);
	}

	////////////////////////////////////////////////////////////
	// if-then-else example
	////////////////////////////////////////////////////////////
	if (a > 10)
	{
		printf("a(%d) is greater than 10\n", a);
	}
	else
	{
		printf("a(%d) is less than or equal to 10\n", a);
	}

	////////////////////////////////////////////////////////////
	// nested if example
	////////////////////////////////////////////////////////////
	if (a >= 10)
	{
		printf("a(%d) is greater than 10 and ", a);
		if ((a % 2) == 0) printf("is even\n");
		else printf("is odd\n");
	}

	////////////////////////////////////////////////////////////
	// equivalent if as a logical expression
	////////////////////////////////////////////////////////////
	if(a >= 10 && (a % 2) == 0) printf("a(%d) is greater than 10 and is even\n", a);
	else printf("a(%d) is greater than 10 and is odd\n", a);

	////////////////////////////////////////////////////////////
	// short circuit evaluation
	// if the first part is false, the second part is not evaluated
	////////////////////////////////////////////////////////////
	if (a < 0 && (c = 2) > 0)
	{
		printf("The condition is false, so this will never print\n");
	}
	printf("after short circuit evaluation, c=%d\n", c);

	////////////////////////////////////////////////////////////
	// multi-way decision
	////////////////////////////////////////////////////////////
	printf("Select one of the following options:\n");
	printf("1 - to say hello\n");
	printf("2 - to say goodbye\n");
	printf("3 - for coffee\n");
	scanf("%d", &option);
	if (option == 1)
	{
		printf("Hello there\n");
	}
	else if (option == 2)
	{
		printf("bye bye\n");
	}
	else if (option == 3)
	{
		printf("can I have a coffee please?\n");
	}
	else
	{
		printf("That is not a valid option\n");
	}

	return 0;
}