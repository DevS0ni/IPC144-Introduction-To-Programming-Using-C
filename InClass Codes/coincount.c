
#include<stdio.h>

int main()
{
	int loonie, b, e, h, k, o;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	double amountOwing;
	double c, d, f, g, i, j, l, n, r, s;
       

	printf("Please enter the amount to be paid: $"); //enter the amount
	scanf("%lf", &amountOwing);
       
	loonie = (int)amountOwing; 
	b = amountOwing * 100;  
	c = b % 100;  
	d = c / 100;  
	printf("Loonies required: %d, balance owing $%.2lf\n", loonie, d);

	e = d * 100;
	f = e % 25;     
	g = f / 100;
	quarters = e / 25;
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, g);

	h = g * 100;
	i = h % 10;
	j = i / 100;
	dimes = h / 10;
	printf("Dimes required: %d, balance owing $%.2lf\n", dimes, j);

	k = j * 100;
	l = k % 5;
	n = l / 100;
	nickels = k / 5;
	printf("Nickels required: %d, balance owing $%.2lf\n", nickels, n);

	o = n * 100;
	r = o % 1;
	s = r / 100;
	pennies = o / 1;
	printf("Pennies required: %d, balance owing $%.2lf\n", pennies, s);

	return 0;
}
