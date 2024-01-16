#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, even;
	double d;

	a = 1;
	b = 2;
	d = (5 + a) / (double)b;

	printf("d=%lf\n", d);

	printf("the remainder on dividing 10 by 3 is: %d\n", 10 % 3);

	a = 38;
	even = (a % 2) == 0;
	printf("%d is even = %d\n", a, even);

	return 0;
}