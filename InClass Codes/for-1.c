#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use the for loop.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* The for loop is like an automatic while loop. It has the form:                */
	/* for(initialization; continuation-test; update)                                */
	/* where the initialization is done once before the loop starts,                 */
	/* The continuation-test is done at the start to see if the loop should execute  */
	/* the update is done at the end of the loop to change the variables             */
	/*                                                                               */
	/* The following shows a for loop printing the numbers from 0-4                  */
	/*********************************************************************************/
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", i);
	}

	/**********************************************************************************/
	/* Notice that the value of i, the loop control variable, changes every time      */
	/* through the loop and the loop stops when the continuation test is no longer    */
	/* true.                                                                          */
	/*                                                                                */
	/* TODO: Complete the loop below to print the numbers from 4 down to 0 in reverse */
	/* order.                                                                         */
	/**********************************************************************************/
	
	for( ; ; )
	{
		printf("%d\n", i);
	}

	/***********************************************************************************/
	/* TODO: Complete the loop below to print just the even numbers from 0 to 10       */
	/* Note that 0 is an even number and that you do not need to use a test to see if  */
	/* the numbers are even or not.                                                    */
	/***********************************************************************************/

	for (; ; )
	{
		printf("%d\n", i);
	}

	return 0;
}

