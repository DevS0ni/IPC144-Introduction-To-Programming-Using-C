/*
*****************************************************************************
                          Workshop - #5 (P1)
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
#define JAN 1
#define DEC 12

int main(void){
    int flag=1,month,year;
    printf("General Well-being Log\n");
    printf("======================\n");
    do{
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d",&year,&month);

        if((year>=MIN_YEAR && year<=MAX_YEAR) && (month>=JAN && month<=DEC)){
            printf("\n*** Log date set! ***\n");

        printf("\nLog starting date: %d-",year);
            
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
        printf("-01\n");
            flag = 0;  // To exit the loop, successfully..
        }
        else if((year>=MIN_YEAR && year<=MAX_YEAR) && (month<JAN || month>DEC)){
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
        else if((year<MIN_YEAR || year>MAX_YEAR) && (month>=JAN && month<=DEC)){
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        else if((year<MIN_YEAR || year>MAX_YEAR) && (month<JAN || month>DEC)){
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
        else{
            printf("ERROR !!!!");
        }
    }while(flag==1);
    return 0;
}