#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*******************************************************
* This is a multiline comment that tells you that this
* is a program to show you concepts of style in writing
* computer code. Note that there are not a lot of comments
* but that they describe major parts of the code or small
* parts which deserve explanation.
*********************************************************/

// macros define constants by replacing the name with the value
// Constants are in upper case
// macros do not have a semicolon at the end of line
#define E 2.71828

/******************************************************
* Variables declared outside functions are called 
* global variables and are accessible to all the code.
* While this might seem convenient, it can cause 
* confusion and errors when we start to use multiple
* functions in our code.
*******************************************************/
int iAmAGlobalVariable;

int main(void)
{
	int i, nAccounts = 0, errorId = 0;
	char lpszName[10] = { "Bob" };	// avoid Hungarian notaion like this
	const double PI = 3.14159;		// name constants rather than have magic numbers

	// use tabs to indent
	// place braces on a new line
	for (i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d is even\n", i);
		}
	}

	// use white space to separate logically different parts of code
	// long lines should be split
	printf("Long lines of text can optionally be split into multiple lines ");
	printf("by spreading the text over two or more printf statements.\n");

	printf("Long lists of variables can be split between commas %d %d %d",
		i, nAccounts, errorId);

	if (i % 2 == 0 &&
		(nAccounts - 12) > (errorId + (i % 100)) ||
		errorId < 0)
		printf("Long expressions can be split over multiple lines\n");

	return 0;
}