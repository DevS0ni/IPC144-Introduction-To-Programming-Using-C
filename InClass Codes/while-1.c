#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use the while loop.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* The while loop is one of the simplest forms of iteration. Iteration repeats   */
	/* a series of steps over and over until it computes a result. This exploits the */
	/* power of the computer to perform the same steps repeatedly at high speed.     */
	/* The loop below prints the numbers from 0 - 4 by repeating the printf with a   */
	/* different value of i each time through the loop. It shows the key parts of    */
	/* a loop:                                                                       */
	/* 1 - initialization of a variable controlling the loop                         */
	/* 2 - a test to see if the loop should be done again                            */
	/* 3 - an update of the variable controlling the loop                            */
	/*********************************************************************************/
	int i = 0;					// 1 - initialize loop contro variable
	while (i < 5)				// 3 - test to see if loop should continue
	{
		printf("%d\n", i);
		i++;					// 2 - update loop control variable
	}

	/*********************************************************************************/
	/* TODO: Complete the loop below to sum the values from 1 - 10                   */
	/*********************************************************************************/
	int sum = 0;
	i = ;
	while ()
	{
		sum = ;
		/* something goes here */
	}
	printf("The sum is %d\n", sum);
	
	return 0;
}

