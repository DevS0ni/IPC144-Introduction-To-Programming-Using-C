#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_NUMS 100
//////////////////////////////////////////////////////////////////////////
// Read floating point temperatures until -99 is entered. Calculate
// the average of the temperatures and print out all of the temperatures 
// that are less than the average.
//////////////////////////////////////////////////////////////////////
int main(void)
{
	double temps[MAX_NUMS];
	double sum = 0, avg, n;
	int i, nTemps = 0, keepGoing = 1;

	do
	{
		printf("Enter a temperature (-99 to stop): ");
		scanf("%lf", &n);
		if (n != -99.0)
		{
			sum += n;
			temps[nTemps++] = n;
		}
		else
		{
			keepGoing = 0;
		}
	} while (keepGoing  == 1);

	avg = sum / nTemps;

	printf("The average of %d temperatures is %.2lf\n", nTemps, avg);
	for (i = 0; i < nTemps; i++)
	{
		if (temps[i] < avg)
		{
			printf("%.2lf is below average\n", temps[i]);
		}
	}

	return 0;
}