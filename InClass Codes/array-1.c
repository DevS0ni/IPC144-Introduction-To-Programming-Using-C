#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_PAY_RATES 10

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to declare arrays.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* Arrays allow multiple variables to be combined under a single name. The       */
	/* advantage of this is that a numeric subscript in square brackets is used to   */
	/* indicate which of the multiple values to access.                              */
	/*********************************************************************************/
	int ar1[10];	// declare an array with space for 10 integers

	ar1[0] = 8;		// set the first member to be 8
	ar1[1] = 12;	// set the second member to be 12
	printf("The second member is %d\n", ar1[1]);	// print out the second member

	/**********************************************************************************/
	/* Values is an array that have not been initialized have unknown values from     */
	/* whatever was left stored in that memory location. Normally, we initialize an   */
	/* array with known values as shown below.                                        */
	/**********************************************************************************/
	
	double payRate[MAX_PAY_RATES] = { 14.75, 22.00, 18.00, 21.50 };

	/**********************************************************************************/
	/* This declares an array of size MAX_PAY_RATES, which is defined as 10. Using a  */
	/* constant makes it easy to change later if we need to. The values in {} are the */
	/* values we are initializing it to. We provide only 4 values out of the 10 it can*/
	/* hold and the remaining values are set to zero. Since we are not using all of   */
	/* the array, we need to keep a separate variable saying how many values are being*/
	/* used, as shown next.                                                           */
	/**********************************************************************************/

	int numPayRates = 4;

	/**********************************************************************************/
	/* The beauty of the array is that we can now use a for loop to print out the     */
	/* values in the array.                                                           */
	/**********************************************************************************/

	int i;
	for (i = 0; i < numPayRates; i++)
	{
		printf("rate[%d] = %.2lf\n", i, payRate[i]);
	}

	/**********************************************************************************/
	/* TODO: Complete the following code to find and print the highest pay rate and   */
	/* its position in the payRate array.                                             */
	/**********************************************************************************/
	int highestPosition = -1;
	double highestRate = -1.0;
	for (; ; )
	{
		if (/* this array member is higher than the highest so far*/)
		{
			/* remember this as the new high rate and store its position */
		}
	}

	printf("The highest pay rate is %.2lf in position %d\n", highestRate, highestPosition);

	return 0;
}

