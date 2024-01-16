#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n, sum = 0, keepGoing = 1;

	/////////////////////////////////////////////////////////
	// A while loop that uses a flag to leave early. The flag
	// becomes negative if a negative value is read or
	// if the sum of the values exceeds 1000. The loop
	// reads a maximum of 10 values.
	/////////////////////////////////////////////////////////
	i = 0;
	while (i < 10 && keepGoing == 1)
	{
		printf("Enter up to 10 numbers (0 to stop): ");
		scanf("%d", &n);
		sum += n;
		keepGoing = n != 0 && sum < 1000;
		i++;
	}
	printf("The first sum=%d\n", sum);

	/////////////////////////////////////////////////
	// Use an if nested inside a loop to sum the 
	// absolute values of some numbers.
	/////////////////////////////////////////////////
	sum = 0;
	printf("Enter a number(0 to stop): ");
	scanf("%d", &n);
	while (n > 0)
	{
		if (n > 0) sum += n;
		else sum += -n;
	}
	printf("The second sum=%d\n", sum);

	//////////////////////////////////////////////////
	// The dangline else arises when programmers do
	// not indent their code correctly.
	//////////////////////////////////////////////////
	if (n > 100)
		if (i == 10)
			printf("i is big\n");
	else
		printf("n < 100\n");

	return 0;
}