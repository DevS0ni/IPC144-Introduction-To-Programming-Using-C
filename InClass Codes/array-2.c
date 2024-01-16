#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_PAY_RATES 10

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use arrays with loops.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* One of the big problems with arrays is that they are not always full. Creating*/
	/* an egg carton that can hold 12 eggs does not mean that it always holds 12     */
	/* eggs. We face two problems: the array must be big enough to hold the data but */
	/* we might not have enough data to fill the array. To handle this, we need to   */
	/* count the actual number of values in the array and remember that it might well*/
	/* be different from the capacity of the array.                                  */
	/*                                                                               */
	/* TODO: Complete the following to read in a series of pay rates and count the   */
	/* number read. Finally, calculate the average of the values entered.            */
	/*********************************************************************************/
	int numPayRates = 0;
	double payRates[MAX_PAY_RATES] = { 0 };
	double sum = 0.0, average = 0.0;
	int notNegative = 0;
	do
	{
		notNegative = 0;
		printf("Enter a pay rate (negative to stop): ");
		scanf("%lf", &payRates[numPayRates]);
		if (/* the value entered is greater or equal zero*/)
		{
			/* add value onto sum and 
			increment the number of values read and
			mark this as a not negative value */
			
		}
	} while (/* value entered was not negative */);

	average = /* expression to calculate average pay rate */;
	printf("The average pay rate is %.2lf\n", average);

	/*********************************************************************************/
	/* One of the most common reasons to use an array is because we need to remember */
	/* the values for later processing. One reason for this is if we want to print   */
	/* the pay rates that are less than the average. This requires that we process   */
	/* the values once to find the average and then process them again to find those */
	/* less than the average.                                                        */
	/*                                                                               */
	/* TODO: Complete the following loop that will visit every member of the payRates*/
	/* array and print out those which are less than the average pay rate.           */
	/*********************************************************************************/

	int i = 0;
	printf("The pay rates below the average are:\n");

	for (; ; )	// loop over all pay rates
	{
		if( /* pay rate is less than the average */)
		{
			printf("%.2lf\n", payRates[i]);
		}
	}

	return 0;
}

