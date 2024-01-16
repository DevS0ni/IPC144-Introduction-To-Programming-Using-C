#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use the switch statement.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* The switch statement can be used to take an action based on the value of an   */
	/* integral value. An integral value is one which has distinct values: like an   */
	/* int or char. Note how we can use a ternary to split ages into ranges and use  */
	/* a switch to do something different for each age range.                        */
	/*********************************************************************************/
	int age = 62;
	const int childMax = 12;
	const int adultMax = 59;
	const int seniorMax = 64;
	double fullTicketPrice = 14.95;
	double finalTicketPrice = 0;
	
	int ageRange = (age <= 12) ? 0 : (age <= 59) ? 1 : (age <= 64) ? 2 : 3;

	switch (ageRange)
	{
	case 0:
		finalTicketPrice = fullTicketPrice / 2.0;
		break;
	case 1:
		finalTicketPrice = fullTicketPrice;
		break;
	case 2:
		finalTicketPrice = fullTicketPrice * 0.9;
		break;
	case 3:
		finalTicketPrice = fullTicketPrice * 0.8;
		break;
	}
	
	printf("The ticket price for a patron of age %d is %.2lf\n", age, finalTicketPrice);

	/*********************************************************************************/
	/* Another way to implement a menu is to use a switch. This one uses single      */
	/* letter options rather than numberic ones.                                     */
	/* TODO: complete the switch below to print a message for the food ordered.      */
	/*********************************************************************************/
	
	char selection = 0;
	printf("Would you like:\n");
	printf("A - chicken\n");
	printf("B - fish\n");
	printf("C - beef\n");
	scanf("%c", &selection);

	switch (selection)
	{
	case 'a':
	case 'A':
		printf("The chicken just ran away, this will take a couple of minutes...\n");
		break;
	case :
	case :
		printf("The fish is very fresh.\n");
		break;
	case :
	case :
		printf("Our beef is the tenderist.\n");
		break;
	/* something needs to be here */
		printf("I'm sorry we do not have that on the menu.\n");
	}

	return 0;
}

