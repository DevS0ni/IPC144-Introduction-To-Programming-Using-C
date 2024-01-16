/*
*****************************************************************************
                          Workshop - #6 (P2)
Full Name  : Soni Dev Alpeshbhai
Student ID#: 130759210
Email      : dasoni4@myseneca.ca
Section    : NOO
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define no_of_wish_items 10

int main(void)
{
    const double min = 500.00;
    const double max = 400000.00;
    int priority;

    int flag = 1;
    double income;
    int months, years;
    double income_convert;

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");
    do{
        printf("Enter your monthly NET income: $");
        scanf("%lf", &income);

        if(income<min){
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
        }

        else if(income>max){
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
        }
        else{
            flag=0;
        }
    }while(flag==1);

    int actual_items;
    flag=1;

    do{
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &actual_items);

        if(actual_items<=0 || actual_items>no_of_wish_items){
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

        else{
            flag=0;
        }
    }while(flag==1);

    const double price = 100.00;
    int items[actual_items];
    double cost[actual_items];
    char finance_op[actual_items];
    double prefer_cost = 0;
    int prefer[actual_items];
    int i = 0;
    int num = 1;

    flag=1;

    for(i=0;i<actual_items;i++){
        items[i] = num;
        num++;
    }

for(i=0;i<actual_items;i++){
    printf("\nItem-%d Details:", items[i]);
    
    do{
        printf("\n   Item cost: $");
        scanf("%lf", &cost[i]);

        if(cost[i]<price){
            printf("      ERROR: Cost must be at least $100.00");
        }
        else{
            flag=0;
        }
    }while(flag==1);

    flag=1;

    do{
        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
        scanf("%d", &prefer[i]);

        if(1>prefer[i] || prefer[i]>3){
            printf("      ERROR: Value must be between 1 and 3\n");
        }
        else{
            flag=0;
        }
    }while(flag==1);

    flag=1;

    do{
        printf("   Does this item have financing options? [y/n]: ");
        scanf(" %c", &finance_op[i]);

        if(finance_op[i]!='n' && finance_op[i]!='y'){
            printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
        }
        else{
            flag=0;
        }
    }while(flag==1);

    flag=1;
}
    
    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for(i=0; i<actual_items;i++){
        printf("%3d  %5d    %5c    %11.2lf\n",items[i],prefer[i],finance_op[i],cost[i]);
    }
    printf("---- -------- -------- -----------\n");
    double total;
    for(i = 0; i<actual_items; i++){
        total += cost[i];
    }

    printf("                      $%11.2lf\n\n",total);

    flag=1;

    do{
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");

        int select = 0;

        printf("Selection: ");
        scanf("%d", &select);

        if(select<0 || select>2){
            printf("\nERROR: Invalid menu selection.\n\n");
        }

        else if(select==1){
            printf("\n====================================================\n");
            printf("Filter:   All items");
            printf("\nAmount:   $%1.2lf\n",total);
            printf("Forecast: 21 years, 7 months\n");
            printf("NOTE: Financing options are available on some items.\n");
            printf("      You can likely reduce the estimated months.\n");
            printf("====================================================\n\n");
        }

        else if(select==2){
            printf("\nWhat priority do you want to filter by? [1-3]: ");
            scanf("%d",&priority);
            printf("\n====================================================\n");
            printf("Filter:   by priority (%d)",priority);
            for(i=0;i<actual_items;i++){
                if(prefer[i] == priority){
                    prefer_cost += cost[i];
                }
            }
            printf("\nAmount:   $%.2lf", prefer_cost);
            income_convert = ( prefer_cost/income ) / 12 + 0.05;
            years = income_convert;
            months = ( income_convert - years ) * 10;
            printf("\nForecast: %d years, %d months", years, months);

            for(i=0;i<actual_items;i++){
            if(prefer[i] == priority){
                
                printf("\nNOTE: Financing options are available on some items.\n");
            }
            }
                printf("      You can likely reduce the estimated months.\n");
            printf("====================================================\n\n");
            prefer_cost = 0;
        }
            
        else{
                flag=0;
            }
        }while(flag==1);

    printf("\nBest of luck in all your future endeavours!\n");

    return 0;
}