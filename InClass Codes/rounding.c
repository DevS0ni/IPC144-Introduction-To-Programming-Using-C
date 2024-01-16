#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	double d;

	d = 47.2;
	printf("d=%.0lf\n", d);

	c = d + 0.5; // rounds up if value in d is greater or equal 0.5
	printf("My round of d=%d\n", c);

	d = 2 / 3.;
	printf("d=%.2lf\n", d);

	b = 5;
	b = b * 2;  // long way
	b *= 2;		// shortcut
	printf("b = %d\n", b);

	b += 1; 
	printf("b = %d\n", b);
	b++;
	printf("b = %d\n", b);
	c = 5;
	a = b++ + c; // postincrement, b is incremented after use
	printf("a = %d, b = %d\n", a, b);

	b = 20;
	a = ++b + c; // preincrement, b is incremented before use
	printf("a = %d, b = %d\n", a, b);

	return 0;
}