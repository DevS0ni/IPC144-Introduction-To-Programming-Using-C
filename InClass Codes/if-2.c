#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use nested ifs.
**************************************************************************************/

int main(void)
{
	/*********************************************************************************/
	/* One way to make complex logic is to nest one if inside another. This can be   */
	/* used to avoid overly complex logical expressions. In the example below, we    */
	/* need to calculate the admission price for a movie where:                      */
	/* child: <= 12 : half price                                                     */
	/* adult: 13-59 : full-price                                                     */
	/* Senior: 60-64 : 10% discount                                                  */
	/* Retired: 65+ : 20% discount                                                   */
	/*                                                                               */
	/* TODO: Complete the if below to calculate the ticket price for the given age.  */
	/*********************************************************************************/
	int age = 62;
	const int childMax = 12;
	const int adultMax = 59;
	const int seniorMax = 64;
	double fullTicketPrice = 14.95;
	double finalTicketPrice = 0;
	
	if (age <= childMax)
	{
		finalTicketPrice = fullTicketPrice / 2.0;
	}
	else
	{
		if ()
		{
			finalTicketPrice = fullTicketPrice;
		}
		else
		{
			if ()
			{
				finalTicketPrice = fullTicketPrice * 0.9;
			}
			else
			{
				finalTicketPrice = fullTicketPrice * 0.8;
			}
		}
	}
	printf("The ticket price for a patron of age %d is %.2lf\n", age, finalTicketPrice);

	/*********************************************************************************/
	/* Sometimes, we need to make a decision based on the value of a variable. One   */
	/* way to do this is with a series of nested ifs in a special format. This takes */
	/* advantage of the fact that is an if is followed by a single statement or a    */
	/* block of statements inside {}.                                                */
	/* TODO: complete the if below to print out a response to the menu selection.    */
	/*********************************************************************************/
	
	int selection = 0;
	printf("Would you like:\n");
	printf("1 - chicken\n");
	printf("2 - fish\n");
	printf("3 - beef\n");
	scanf("%d", &selection);

	if (selection == 1)
	{
		printf("The chicken just ran away, this will take a couple of minutes...\n");
	}
	else if (   )
	{
		printf("The fish is very fresh.\n");
	}
	else if (   )
	{
		printf("Our beef is the tenderist.\n");
	}
	else
	{
		printf("I'm sorry we do not have that on the menu.\n");
	}

	return 0;
}

