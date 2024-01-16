#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const double PI = 3.14159265359;
	double radius, area;
	int day = 0x15;

	printf("Enter the radius: ");
	scanf("%lf", &radius);

	area = PI * radius * radius;
	printf("The area of a circle of radius %.2lf is: %.2lf\n", radius, area);
	printf("day=%d\n", day);

	return 0;
}