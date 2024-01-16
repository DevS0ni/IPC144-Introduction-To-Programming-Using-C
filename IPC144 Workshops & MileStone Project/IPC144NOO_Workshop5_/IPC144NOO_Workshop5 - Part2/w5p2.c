/*
*****************************************************************************
                          Workshop - #5 (P2)
Full Name  : SONI DEV ALPESHBHAI
Student ID#: 13075210
Email      : dasoni4@myseneca.ca
Section    : NOO
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3
int main(void)
{
	const int JAN = 1, DEC = 12;
	int month, year;
	int prob1 = 1, prob2 = 1, check = 1;
	int i;

	double day_sum = 0, evening_sum = 0, day_rate, evening_rate, avg_day, avg_evening;
	const double minimum_rate = 0.0, maximum_rate = 5.0;

	printf("General Well-being Log\n");
	printf("======================\n");

	while (prob1 || prob2)
	{
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
		prob1 = year<MIN_YEAR || year>MAX_YEAR;
		prob2 = month<JAN || month>DEC;
		if (prob1)
		{
			printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
		}

		if (prob2)
		{
			printf("   ERROR: Jan.(1) - Dec.(12)\n");
		}
	};

	printf("\n");
	
	printf("*** Log date set! ***\n");
	for (i = 0; i < LOG_DAYS; i++)
	{

		printf("\n%d-", year);

		switch (month)
		{
		case 1: printf("JAN");
			break;
		case 2: printf("FEB");
			break;
		case 3: printf("MAR");
			break;
		case 4: printf("APR");
			break;
		case 5: printf("MAY");
			break;
		case 6: printf("JUN");
			break;
		case 7: printf("JUL");
			break;
		case 8: printf("AUG");
			break;
		case 9: printf("SEP");
			break;
		case 10: printf("OCT");
			break;
		case 11: printf("NOV");
			break;
		case 12: printf("DEC");
			break;
		}

		printf("-0%d\n", i + 1);

		check = 1;
		while (check > 0)
		{
			printf("   Morning rating (0.0-5.0): ");
			scanf("%lf", &day_rate);
			if (day_rate<minimum_rate || day_rate > maximum_rate)
			{
				printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
			}
			else
			{
				day_sum = day_sum + day_rate;
				check = 0;
			}
		};

		int record = 1;
		while (record > 0)
		{
			printf("   Evening rating (0.0-5.0): ");
			scanf("%lf", &evening_rate);

			if (evening_rate<minimum_rate || evening_rate>maximum_rate)
			{
				printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
			}
			else
			{
				evening_sum = evening_sum + evening_rate;
				record = 0;

			}
		};
	}
	printf("\nSummary\n");
	printf("=======\n");
	printf("Morning total rating: %.3lf\n", day_sum);
	printf("Evening total rating:  %.3lf\n", evening_sum);
	printf("----------------------------\n");
	printf("Overall total rating: %.3lf\n\n", day_sum + evening_sum);
	avg_day = day_sum / LOG_DAYS;
	avg_evening = evening_sum / LOG_DAYS;
	printf("Average morning rating:  %0.1lf\n", avg_day);
	printf("Average evening rating:  %0.1lf\n", avg_evening);
	printf("----------------------------\n");
	printf("Average overall rating:  %0.1lf\n", (avg_day + avg_evening) / 2.0);

	return 0;
}