#include <stdio.h>

int power(int n, int pow)
{
	int i, result = 1;

	for (i = 0; i < pow; i++)
	{
		result *= n;
	}
	return result;
}

double fraction(double d1)
{
	int whole;

	whole = (int)d1;
	return d1 - whole;
}

int main(void)
{
	printf("power=%d\n", power((int)2.5, (int)3.1));
	printf("Fraction=%lf\n",fraction(5));

	return 0;
}