
/*
*****************************************************************************
                          Workshop - #3 (P1)
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

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    int Product1=111, Product2=222, Product3=111;
    char Tax1='Y', Tax2='N', Tax3='N';
    double Price1=111.4900, Price2=222.9900, Price3=334.4900;
    double Avg=222.9900;
    int flag=0;
    printf("Product Information");
    printf("\n===================\n");
    printf("Product-1 (ID:%d)\n", Product1);
    printf("  Taxed: %c\n",Tax1);
    printf("  Price: $%.4lf\n\n", Price1);
    printf("Product-2 (ID:%d)",Product2);
    printf("\n  Taxed: %c", Tax2);
    printf("\n  Price: $%.4lf\n\n",Price2);
    printf("Product-3 (ID:%d)",Product3);
    printf("\n  Taxed: %c", Tax3);
    printf("\n  Price: $%.4lf\n",Price3);
    printf("\nThe average of all prices is: $%.4lf\n\n",Avg);
    printf("About Relational and Logical Expressions!");
    printf("\n========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    if(Tax1=='Y'){
        flag=1;
    }
    printf("1. Is product 1 taxable? -> %d\n\n", flag);
    if(Tax2=='N' && Tax3=='N'){
        flag=1;
    }
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", flag);
    if(Price3 > testValue){
        flag=0;
    }
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, flag);
    if(Price1 + Price2 < Price3){
        flag=1;
    }
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", flag);
    if(Price1>=Price2-Price3){
        flag=0;
    }
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n", flag, (Price3-Price2));
    if(Price2 >= Avg){
        flag=1;
    }
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", flag);
    if(Product1==Product3){
        flag=0;
    }
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", flag);
    if(Product2!=Product3 && Product2!=Product1){
        flag=1;
    }
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", flag);
    if(Product3==Product1){
        flag=0;
    }
    printf("9. Based on product ID, product 3 is unique -> %d\n", flag);
    return 0;
}