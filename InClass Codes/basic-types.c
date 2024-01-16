#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to illustrate the basic data types in C.
**************************************************************************************/

int main(void)
{
	int n;
	double d;
	char char1;

	/*********************************************************************************/
	/* ints are one of the most basic types in C and can store a whole number without*/
	/* a fraction. The following stores 42 into the variable n.                      */
	/*********************************************************************************/

	n = 42;
	printf("n=%d\n", n);

	/*********************************************************************************/
	/* Doubles are an example of a floating point value, which can contain a fraction*/
	/*********************************************************************************/
	d = 3.141592653589793;
	printf("d=%.4lf\n", d);

	/*********************************************************************************/
	/* As you can see, a double can retain many digits after the decimal. When it    */
	/* was printed, we asked for just 4 places past the decimal and the printf       */
	/* rounded the value to the requested number of decimal digits                   */
	/*                                                                               */
	/* The next question is what happens if we assign a double to an int. Let's try  */
	/* it and see.                                                                   */
	/*********************************************************************************/

	n = d;
	printf("n=%d\n", n);

	/*********************************************************************************/
	/* As you can see, the fraction disappeared, It is not rounded but is simply     */
	/* discarded.                                                                    */
	/*                                                                               */
	/* We can use this, along with a clever technique to round a floating point      */
	/* number to the nearest int.                                                    */
	/*                                                                               */
	/* If you add 0.5 to a fraction and the fraction is less than 1.2 then the whole */
	/* number is unchanged. For example, 3.2 + 0.5 = 3, so there is no change to the */
	/* whole number. On the other hand, as soon as the fraction hits 1/2 or larger   */
	/* and we add 0.5, it changes the whole number. Eg. 3.6 + 0.5 = 4.1. We can use  */
	/* this to round to the nearest whole number by adding 0.5 and chopping the      */
	/* fraction.                                                                     */
	/*********************************************************************************/

	n = 3.2 + 0.5;
	printf("n is rounded down to %d\n", n);

	n = 3.6 + 0.5;
	printf("n is rounded up  to %d\n", n);

	/*********************************************************************************/
	/* If we want to round to one place after the decimal, (3.27->3.3) it is         */
	/* more complicated and we can use the following algorithm:                      */
	/* 1. add 0.05 to the number                                                     */
	/* 2. multiply by 10 to shift the decimal point                                  */
	/* 3. assign to an int to chop the fraction                                      */
	/* 4. Divide by 10 to get the original number back                               */
	/* Write the code to round the value of d to one place past the decimal.         */
	/*********************************************************************************/

	d = 45.36;
	// TODO: Place code to round this to 45.4 below this line
	

	printf("d rounded to 1 place after the decimal is %.2lf\n", d);

	/*********************************************************************************/
	/* Characters can be used to hold numbers from -128 to 127. If we exceed this we */
	/* get strange results. This is because we tried to store a number larger than it*/
	/* could hold.                                                                   */
	/*********************************************************************************/

	char1 = 512;
	printf("char1=%d\n", char1);

	/*********************************************************************************/
	/* TODO: change the number assigned to char1 to 51 in the code above. Observe how*/
	/* it now prints the correct value because the value assigned is within the range*/
	/* a char can represent.                                                         */
	/*********************************************************************************/

	/*********************************************************************************/
	/*Chars are usually used to hold characters by assigning a letter in single      */
	/* quotation marks, as shown below.                                              */
	/*********************************************************************************/

	char1 = 'X';
	printf("char1=%c\n", char1);

	/*********************************************************************************/
	/* The code above works as expected and prints a character X. Now, let's look at */
	/* what happens when we print the same variable as an int.                       */
	/*********************************************************************************/

	printf("char1=%d\n", char1);
	
	/*********************************************************************************/
	/* This prints 88. To see why go to https://www.asciitable.com and look up the   */
	/* value of an upper case X. Under the decimal column you will see 88. Characters*/
	/* in C are really represented as integers and just looked up in an ascii table  */
	/* to find the associated character.                                             */
	/*********************************************************************************/

	return 0;
}

