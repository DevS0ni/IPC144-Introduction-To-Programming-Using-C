/*
*****************************************************************************
                          Workshop - #2 (P1)
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
#include<stdio.h>

#define TAX 0.13
int main(){

    const char patSize = 'S';
    double small_price,med_price,large_price;
    int num_of_shirts_patty;
    double sub_total,total;
    printf("Set Shirt Prices\n");
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
    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts",num_of_shirts_patty);
    sub_total = num_of_shirts_patty*small_price;
    sub_total = (sub_total * 100);
    sub_total = (int)(sub_total + 0.5);
    sub_total = (double)(sub_total/100);
    printf("\nSub-total: $%8.4lf", sub_total);
    double taxes=sub_total*TAX;
    taxes = (taxes * 100);
    taxes = (int)(taxes + 0.5);
    taxes = ((double)taxes)/100;
    printf("\nTaxes    : $%8.4lf", taxes);
    total = sub_total+taxes;
    printf("\nTotal    : $%8.4lf\n", total);
    return 0;
}
