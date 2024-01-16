#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use relational operators.
**************************************************************************************/

int main(void)
{
	int n, i;
	double d;
	char char1;

	/*********************************************************************************/
	/* The relational operators compare two values to determine if they are          */
	/*     ==  equal                                                                 */
	/*     !=  not equal                                                             */
	/*     <  less than                                                              */
	/*     <=  less than or equal                                                    */
	/*     >  greater than                                                           */
	/*     >=  greater than or equal                                                 */
	/* They return 1 if true and 0 if false.                                         */
	/*********************************************************************************/

	printf("%d equals %d is %d\n", 4, 4, 4 == 4);

	/*********************************************************************************/
	/* TODO: using the printf above as a template, complete the printf below to      */
	/* print 1 if n is less than 10.                                                 */
	/*********************************************************************************/
	n = 5;
	printf("%d is less than %d is %d\n", n, 10, );

	/*********************************************************************************/
	/* The NOT operator (!) makes true false and false true. Remember that 0 is false*/
	/* and any other value is true.                                                  */
	/* TODO: Use the NOT operator in the expression below to print 1 if n is not     */
	/* less than 10.                                                                 */
	/*********************************************************************************/
	printf("%d is NOT less than %d is %d\n", n, 10, );

	/*********************************************************************************/
	/* TODO: Finally, calculate NOT n below and explain the result.                  */
	/*********************************************************************************/
	printf("NOT %d is %d\n", n, );

	return 0;
}

