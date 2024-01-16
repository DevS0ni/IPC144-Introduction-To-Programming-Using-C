#include <stdio.h>

void printChars(char ch, int howMany)
{
	int i;

	for (i = 0; i < howMany; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}

int power(int n, int pow)
{
	int i, result = 1;

	for (i = 0; i < pow; i++)
	{
		result *= n;
	}
	return result;
}

int main(void)
{
	int i;

	printChars('-', 40);
	printf("%4s%6s\n", "N", "2**N");
	for (i = 0; i < 11; i++)
	{
		printf("%4d%6d\n", i, power(2, i));
	}
	printChars('*', 40);

	return 0;
}