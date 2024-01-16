#include <stdio.h>

int main(void)
{
	int n = 42;		// an int
	int* pn;		// a pointer to (address of)  an int

	pn = &n;		// set pn to address of n

	printf("n=%d and is stored at %x\n", n, pn); 

	// now, print the value of n by dereferencing the pointer
	printf("n=%d and is stored at %x\n", *pn, pn);

	(*pn)++;		// add 1 to n
	printf("after incrementing, n=%d and is stored at %x\n", *pn, pn);

	return 0;
}