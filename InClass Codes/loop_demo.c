#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;

	/////////////////////////////////////////////////
	// standard while loop
	/////////////////////////////////////////////////
	i = 0;									// initialization
	while (i < 3)							// loop condition to continue
	{
		printf("std while: i=%d\n", i);
		i++;								// update
	}

	//////////////////////////////////////////////////
	// do-while loop
	//////////////////////////////////////////////////
	do
	{
		printf("enter a positive number (0 to exit): ");
		scanf("%d", &i);								// update
		if (i > 0)										// condition to do work
		{
			printf("do-while: You typed: %d\n", i);
		}
	} while (i > 0);									// loop condition to continue

	///////////////////////////////////////////////////
	// for loop
	// for(initialization; condition; update)
	///////////////////////////////////////////////////
	for (i = 0, j = 1; i < 2; i++, j++)
	{
		printf("for: i=%d, j=%d\n", i, j);
	}

	///////////////////////////////////////////////////
	// for loop counting down
	///////////////////////////////////////////////////
	for (i = 5; i > 0; i--)
	{
		printf("%d ", i);
	}
	printf("... Blastoff!\n");

	////////////////////////////////////////////////////
	// nested for loops
	////////////////////////////////////////////////////
	for (i = 0; i < 3; i++)
	{
		for (j = i; j > 0; j--)
		{
			printf("nested: i=%d, j=%d\n", i, j);
		}
	}


	return 0;
}