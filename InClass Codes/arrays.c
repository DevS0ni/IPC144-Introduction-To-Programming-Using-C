#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ar1[5];
	int ar2[] = { 4, 2 };
	int ar3[3] = { 0 };

	ar1[0] = 1;
	ar1[1] = 6;
	printf("ar1[0]=%d, ar1[1]=%d\n", ar1[0], ar1[1]);

	printf("ar2[0]=%d, ar2[1]=%d\n", ar2[0], ar2[1]);

	printf("ar3[0]=%d, ar3[1]=%d, ar3[2]=%d\n", ar3[0], ar3[1], ar3[2]);

	return 0;
}