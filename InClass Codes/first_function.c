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

int main(void)
{
	printChars('-', 40);
	printf("An example of a simple function\n");
	printChars('*', 40);

	return 0;
}