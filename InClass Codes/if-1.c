#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use conditional execution.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* Up to this point, statements have been executed one after another. This is    */
	/* called the flow of control. We will not introduce the if statement which lets */
	/* us change the flow of control. With an if we can execute a group of statements*/
	/* or not. If we do not execute the statements, it skips to the end of the if.   */
	/* Ifs are usually controlled by the results of Boolean expressions and the body */
	/* of the if is executed if the result of the expression is true.                */
	/* For example:                                                                  */
	/* int n = 10;                                                                   */
	/* if( n > 0)                                                                    */
	/* {                                                                             */
	/*      printf("%d is positive\n", n);                                           */
	/* }                                                                             */
	/*                                                                               */
	/* TODO: Complete the if below to print that n is even if the value of n really  */
	/* is an even number.                                                            */
	/*********************************************************************************/
	int n = 6;
	if (   )
	{
		printf("%d is even\n", n);
	}

	/*********************************************************************************/
	/* Sometimes, we want to execute one block of statements but, if the condition is*/
	/* false, we want to execute another block of statements. This can be dome with  */
	/* the if-then-else statement.                                                   */
	/* TODO: complete the if below to print out whether we have any child labourers  */
	/* or not. HINT: You will need to use a logical expression for the if.           */
	/*********************************************************************************/
	int child		= 0;
	int adult		= 1;
	int senior		= 0;
	int employed	= 1;

	if (   )
	{
		printf("We have child labourers\n");
	}
	else
	{
		printf("We do not have child labourers\n");
	}

	return 0;
}

