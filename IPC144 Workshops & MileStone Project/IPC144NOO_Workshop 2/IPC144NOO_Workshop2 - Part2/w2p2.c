/*
*****************************************************************************
                          Workshop - #2 (P2)
Full Name  : SONI DEV ALPESHBHAI
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

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double small_price,med_price,large_price,sub_total_patty,tax_patty,total_patty,sub_total_sally,tax_sally,total_sally,sub_total_Tommy,tax_Tommy,total_Tommy;
    double sub_total_total, tax_total, final_total,balance_toonies;
    int num_of_shirts_patty,num_of_shirts_tommy,num_of_shirts_sally;
    int toonies,loonies,quarters,dimes,nickels,pennies;
    double total;
    printf("\nSet Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &small_price);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &med_price);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &large_price);
    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf", small_price);
    printf("\nMEDIUM : $%.2lf", med_price);
    printf("\nLARGE  : $%.2lf", large_price);
    printf("\n\nPatty's shirt size is '%c'", patSize);
    printf("\nNumber of shirts Patty is buying: ");
    scanf("%d",&num_of_shirts_patty);
    printf("\nTommy's shirt size is '%c'", tomSize);
    printf("\nNumber of shirts Tommy is buying: ");
    scanf("%d",&num_of_shirts_tommy);
    printf("\nSally's shirt size is '%c'", salSize);
    printf("\nNumber of shirts Sally is buying: ");
    scanf("%d",&num_of_shirts_sally);
   
    sub_total_patty = num_of_shirts_patty*small_price;
    sub_total_patty = (sub_total_patty * 100);
    sub_total_patty = (int)(sub_total_patty + 0.5);
    sub_total_patty = (double)(sub_total_patty)/100;

    tax_patty = sub_total_patty*TAX;
    tax_patty = (tax_patty * 100);
    tax_patty = (int)(tax_patty + 0.5);
    tax_patty = ((double)tax_patty)/100;

    total_patty = sub_total_patty+tax_patty;

    
    sub_total_sally = num_of_shirts_sally*med_price;
    sub_total_sally = (sub_total_sally * 100);
    sub_total_sally = (int)(sub_total_sally + 0.5);
    sub_total_sally = (double) (sub_total_sally)/100;

    tax_sally = sub_total_sally*TAX;
    tax_sally = (tax_sally * 100);
    tax_sally = (int)(tax_sally + 0.5);
    tax_sally = (double)(tax_sally)/100;

    total_sally = sub_total_sally+tax_sally;


    sub_total_Tommy = num_of_shirts_tommy*large_price;
    sub_total_Tommy = (sub_total_Tommy * 100);
    sub_total_Tommy = (int)(sub_total_Tommy + 0.5);
    sub_total_Tommy = ((double)sub_total_Tommy)/100;

    tax_Tommy = sub_total_Tommy*TAX;
    tax_Tommy = (tax_Tommy * 100);
    tax_Tommy = (int)(tax_Tommy + 0.5);
    tax_Tommy = ((double)tax_Tommy)/100;

    total_Tommy = sub_total_Tommy+tax_Tommy;

    sub_total_total = sub_total_patty+sub_total_sally+sub_total_Tommy;
    tax_total = tax_patty+tax_sally+tax_Tommy;
    final_total = total_patty+total_sally+total_Tommy;

    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",patSize,small_price,num_of_shirts_patty,sub_total_patty,tax_patty,total_patty);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",salSize,med_price,num_of_shirts_sally,sub_total_sally,tax_sally,total_sally);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",tomSize,large_price,num_of_shirts_tommy,sub_total_Tommy,tax_Tommy,total_Tommy);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n",sub_total_total,tax_total,final_total);
    printf("Daily retail sales represented by coins");
    printf("\n=======================================\n");
    printf("\nSales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n",sub_total_total);

    int quantity_shirts = num_of_shirts_patty+num_of_shirts_sally+num_of_shirts_tommy;

    toonies = (int)(sub_total_total/2);
    balance_toonies = sub_total_total - (double)(toonies*2); 
    printf("Toonies  %3d %9.4lf\n", toonies, balance_toonies);
    loonies = (int)(balance_toonies/1);
    double balance_loonies = balance_toonies - (double)loonies;
    printf("Loonies  %3d %9.4lf\n", loonies, balance_loonies);
    quarters = (int) (balance_loonies/0.25);
    double balance_quarters = balance_loonies - (double)quarters*0.25;
    printf("Quarters %3d %9.4lf\n", quarters, balance_quarters);
    dimes = (int) (balance_quarters/0.1);
    double balance_dimes = balance_quarters - (double)dimes*0.10;
    printf("Dimes    %3d %9.4lf\n", dimes,balance_dimes);
    nickels = (int)(balance_dimes/0.05);
    double balance_nickels = balance_dimes - (double)nickels*0.05;
    printf("Nickels  %3d %9.4lf\n", nickels,balance_nickels);
    double penny = 0.01; // Value of a penny...
    pennies = (int) (balance_nickels / penny);
    double balance_pennies = (balance_nickels - (double)pennies * 0.01);
    printf("Pennies  %3d %9.4lf\n", pennies, balance_pennies);
    double average_cost = sub_total_total/quantity_shirts;
    printf("\nAverage cost/shirt: %.4lf\n", average_cost);
    printf("\nSales INCLUDING tax\n");
    printf("Coin      Qty   Balance\n");
    printf("--------  --- ---------\n");
    int Toonies = (int)(final_total/2);
    double tax_toonies = final_total - (double)(2 * Toonies);
    printf(" %22.4lf\n", final_total);
    printf("Toonies   %3d %9.4lf\n", Toonies,tax_toonies);
    loonies = (int)(tax_toonies / 1);
    double tax_loonies = tax_toonies - (double)loonies;
    printf("Loonies   %3d %9.4lf\n", loonies,tax_loonies);
    quarters = (int) (tax_loonies / 0.25);
    double tax_quarters = tax_loonies - (double)(0.25 * quarters);
    printf("Quarters  %3d %9.4lf\n", quarters,tax_quarters);
    dimes = (int) (tax_quarters / 0.1);
    double tax_dimes = tax_quarters - (double)(0.1 * dimes);
    printf("Dimes     %3d %9.4lf\n", dimes,tax_quarters);
    nickels = (int) (tax_dimes / 0.05);
    double tax_nickels = tax_dimes - (double)(0.05 * nickels);
    printf("Nickels   %3d %9.4lf\n",nickels,tax_nickels);
    pennies = (int) (tax_nickels / penny);
    double tax_Pennies = tax_nickels - (double)pennies*0.01;
    printf("Pennies   %3d %9.4lf\n", pennies, tax_Pennies);
    double taxes_avg = final_total / quantity_shirts;
    printf("\nAverage cost/shirt: %.4lf\n", taxes_avg);
   return 0;
}
