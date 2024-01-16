#include <stdio.h>

int add1(int n)
{
	n++;
	return n;
}

int addMod1(int* n)
{
	printf("modifying value at address %x\n", n);
	(*n)++;
	return *n;
}

int main(void)
{
	int value = 9, returnValue;

	printf("before calling add1, value=%d and is at address %x\n", value, &value);
	returnValue = add1(value);	// pass by value

	printf("after calling add1, value=%d and returnValue=%d\n", value, returnValue);
	printf("About to call addMod1\n");
	returnValue = addMod1(&value);	// pass by address
	printf("after calling addMod1, value=%d and returnValue=%d\n", value, returnValue);

	return 0;
}