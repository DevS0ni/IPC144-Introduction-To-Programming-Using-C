#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use logical operators.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* The logical operators combine two Boolean values into a new Boolean result.   */
	/* The operators are:                                                            */
	/*     && - AND                                                                  */
	/*     || - OR                                                                   */
	/*     !  - NOT                                                                  */
	/*********************************************************************************/

	/*********************************************************************************/
	/* AND returns true only if the first value is true AND the second value is true.*/
	/*********************************************************************************/
	int child		= 0;
	int adult		= 1;
	int senior		= 0;
	int employed	= 1;

	/*********************************************************************************/
	/* TODO: Modify the printf below to print 1 if adult is true and employed is true*/
	/* using the variables declared above.                                           */
	/*********************************************************************************/

	printf("adult AND employed is %d\n", );

	/*********************************************************************************/
	/* OR returns true if either the first value is true OR the second value is true */
	/* OR both of the values are true.                                               */
	/* TODO: complete the printf below to print 1 if senior is true or employed is   */
	/* true.                                                                         */
	/*********************************************************************************/
	
	printf("senior OR employed is %d\n", );

	/*********************************************************************************/
	/* The NOT operator (!) makes true false and false true. Remember that 0 is false*/
	/* and any other value is true.                                                  */
	/* TODO: Use the NOT operator in the expression below to print 1 if n is not     */
	/* less than 10.                                                                 */
	/*********************************************************************************/
	int n = 5;
	printf("%d is NOT less than %d is %d\n", n, 10, );

	/*********************************************************************************/
	/* TODO: Finally, calculate NOT n below and explain the result.                  */
	/*********************************************************************************/
	printf("NOT %d is %d\n", n, );

	/*********************************************************************************/
	/* Things get more interesting when we use the values of Boolean variables to    */
	/* identify situations. We can combine relational operators to figure out complex*/
	/* situations. Remember the precedence: NOT before AND before OR.                */
	/* TODO: Using the variables declared above, complete the printf below to print 1*/
	/* if we have a child worker or an unemployed senior.                            */
	/*********************************************************************************/
	printf("We have a child worker or an unemployed senior = %d\n", );

	return 0;
}

