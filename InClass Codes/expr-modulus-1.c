#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use modulus.
**************************************************************************************/

int main(void)
{
	int n, i;
	double d;
	char char1;

	/*********************************************************************************/
	/* The modulus operator returns the remainder after division. For example 8 % 3  */
	/* is 2 because 3 goes into 8 twice with 2 left over. It is the left over it     */
	/* returns.                                                                      */
	/*********************************************************************************/

	n = 8 % 3;
	printf("n=%d\n", n);

	/*********************************************************************************/
	/* While this might seem useless, it is used for many things. First, it can be   */
	/* used to generate a repeating series of numbers. If we do any number modulus n */
	/* the result will be a series of numbers from 0 to n-1 which repeat. Look at the*/
	/* output from the code below.                                                   */
	/*********************************************************************************/
	printf("0 %% 3 = %d\n", 0 % 3);
	printf("1 %% 3 = %d\n", 1 % 3);
	printf("2 %% 3 = %d\n", 2 % 3);
	printf("3 %% 3 = %d\n", 3 % 3);
	printf("4 %% 3 = %d\n", 4 % 3);
	printf("5 %% 3 = %d\n", 5 % 3);
	printf("6 %% 3 = %d\n", 6 % 3);

	/*********************************************************************************/
	/* As you can see, the remainer repeats in a cyclical fashion. This can be used  */
	/* to                                                                            */
	/*     - determine if a number if evenly divisible by another when remainer is 0 */
	/*     - turn any number into a number from 0 to n-1, when calculated modulus n  */                                                                          
	/*********************************************************************************/

	i = 6;
	n = 7;
	
	/*********************************************************************************/
	/* TODO: Complete the print statements below to print 0 if a number is even and 1*/
	/* if the number is odd. Add the expression to the printf to do the right        */
	/* calculation to print a 0 or 1.                                                */
	/*********************************************************************************/
	printf("%d is %d\n", i, );
	printf("%d is %d\n", n, );

	/*********************************************************************************/
	/* A less obvious use is to help with conversions. We know that a circle is 360  */
	/* degrees. To convert 832 degrees to the number of times you turn around we     */
	/* would divide by 360. Every time we turn a complete circle, we are back where  */
	/* we started. We can avoid a whole lot of spinning by subtracting out the number*/
	/* of full circles and just turning the number of degrees that remain.           */
	/*********************************************************************************/

	n = 832;
	printf("%d degrees represents %d full circles\n", n, n / 360);

	/*********************************************************************************/
	/* TODO: In the print statement below, use modulus to calculate how many degrees */
	/* to turn without having to spin the total number of circles.                   */
	/*********************************************************************************/
	printf("but to get to %d degrees you only need to turn %d degrees\n", n, );

	return 0;
}

