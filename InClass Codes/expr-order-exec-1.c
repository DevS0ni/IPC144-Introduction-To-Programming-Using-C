#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to illustrate the order of execution of basic operators.
**************************************************************************************/

int main(void)
{
	double fahrenheit = 68, celsius = 0;

	// TODO: The formula below tries to convert a temperature in fahrenheit to celsius using
	// the formula c = 5/9 * f - 32 and should produce the answer 20. Fix the formula so that
	// it produces the correct value.

	celsius = 5 / 9 * fahrenheit - 32 ;

	printf("celsius=%.2lf\n", celsius);

	return 0;
}

