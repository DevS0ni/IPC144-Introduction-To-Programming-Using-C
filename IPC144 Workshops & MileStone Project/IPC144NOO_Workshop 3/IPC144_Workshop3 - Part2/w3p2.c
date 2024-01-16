
/*
*****************************************************************************
                          Workshop - #3 (P2)
Full Name  : Soni Dev Alpeshbhai
Student ID#: 1307859210
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char coffeeType1,grindSize1,coffeeType2,grindSize2,coffeeType3,grindSize3,creamServed1,creamServed2,creamServed3;
    int bagWeight1,bagWeight2,bagWeight3,lightType,blendType,courseSize,fineSize,bestWithCream,coffeeType,coffeeGrindSize,bagPackagedWeight,servingTemp;
    double celsius1,celsius2,celsius3;
	// Note:
	// You can convert Celsius to Fahrenheit given the following formula:
	// fahrenheit = (celsius * 1.8) + 32.0);
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...");
    printf("\nType ([L]ight,[B]lend): ");
    scanf("%c", &coffeeType1);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c",&grindSize1);
    printf("Bag weight (g): ");
    scanf("%d",&bagWeight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamServed1);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &celsius1);
    printf("\nCOFFEE-2...");
    printf("\nType ([L]ight,[B]lend): ");
    scanf(" %c", &coffeeType2);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c",&grindSize2);
    printf("Bag weight (g): ");
    scanf("%d",&bagWeight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamServed2);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &celsius2);
    printf("\nCOFFEE-3...");
    printf("\nType ([L]ight,[B]lend): ");
    scanf(" %c", &coffeeType3);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c",&grindSize3);
    printf("Bag weight (g): ");
    scanf("%d",&bagWeight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamServed3);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &celsius3);
    printf("\n---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    if(coffeeType1=='l' || coffeeType1 == 'L') {
        lightType=1, blendType=0;
        }
    else{
        lightType=0, blendType=1;
    }
    if(grindSize1 == 'c' || grindSize1 == 'C') {
        courseSize=1, fineSize=0;
        }
    else{
        courseSize=0, fineSize=1;
    }
    if(creamServed1 == 'y' || creamServed1 == 'Y'){
        bestWithCream=1;
    }
    else{
        bestWithCream=0;
    }

    printf(" 1 |   %d   |   %d   |    %d   |   %d  |  %d |  %.3lf |   %d   |  %.1lf | %.1lf\n",lightType,
    blendType,courseSize,fineSize,bagWeight1, bagWeight1/GRAMS_IN_LBS,bestWithCream, celsius1,(celsius1 * 1.8) + 32.0);
    
     if(coffeeType2=='b' || coffeeType2 == 'B') {
        lightType=0, blendType=1;
        }
     else{
        lightType=1, blendType=0;
    }
    if(grindSize2 == 'c' || grindSize2 == 'C') {
        courseSize=1, fineSize=0;
        }
    else{
        courseSize=0, fineSize=1;
    }
    if(creamServed2 == 'y' || creamServed2 == 'Y'){
        bestWithCream=1;
    }
    else{
        bestWithCream=0;
    }

    printf(" 2 |   %d   |   %d   |    %d   |   %d  |  %d |  %.3lf |   %d   |  %.1lf | %.1lf\n",lightType,blendType,courseSize, fineSize,bagWeight2,bagWeight2/GRAMS_IN_LBS,bestWithCream,celsius2,(celsius2 * 1.8) + 32.0);
    
     if(coffeeType3=='l' || coffeeType3 == 'L') {
        lightType=1, blendType=0;
        }
    else{
        lightType=0, blendType=1;
    }
    if(grindSize3 == 'c' || grindSize3 == 'C') {
        courseSize=1, fineSize=0;
        }
    else{
        courseSize=0, fineSize=1;
    }
    if(creamServed3 == 'y' || creamServed3 == 'Y'){
        bestWithCream=1;
    }
    else{
        bestWithCream=0;
    }

    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %d |  %.3lf |   %d   |  %.1lf | %.1lf\n",lightType
    ,blendType,courseSize,fineSize,bagWeight3,bagWeight3/GRAMS_IN_LBS,bestWithCream,celsius3,(celsius3 * 1.8) + 32.0);
    
    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n\n");
    char coffeeStrength,coffeeWithCream,coffeeMaker;
    int numOfServings;
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffeeStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeWithCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &numOfServings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &coffeeMaker);

    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");

    if(coffeeStrength == 'm' || coffeeStrength == 'M'){
        coffeeType = 1;
    }
    else{
        coffeeType = 0;
    }

    if(coffeeWithCream == 'y' || coffeeWithCream == 'Y'){
        bestWithCream = 1;
    }
    else{
        bestWithCream = 0;
    }

    if(1<=numOfServings && numOfServings<=4){
        bagPackagedWeight= 1;
    }
    else if(5<=numOfServings && numOfServings<=9){
        bagPackagedWeight= 0;
    }
    else{
        bagPackagedWeight= 0;
    }

    if(coffeeMaker == 'r' || coffeeMaker == 'R'){
        coffeeGrindSize = 1;
        servingTemp = 1;
    }
    else{
        coffeeGrindSize = 0;
        servingTemp = 0;
    }
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",coffeeType,coffeeGrindSize,bagPackagedWeight,bestWithCream,servingTemp);


    if(coffeeStrength == 'm' || coffeeStrength == 'M'){
        coffeeType = 0;
    }
    else{
        coffeeType = 1;
    }

    if(coffeeWithCream == 'y' || coffeeWithCream == 'Y'){
        bestWithCream = 0;
    }
    else{
        bestWithCream = 1;
    }

    if(1<=numOfServings && numOfServings<=4){
        bagPackagedWeight= 0;
    }
    else if(5<=numOfServings && numOfServings<=9){
        bagPackagedWeight= 1;
    }
    else{
        bagPackagedWeight= 0;
    }

    if(coffeeMaker == 'r' || coffeeMaker == 'R'){
        coffeeGrindSize = 0;
        servingTemp = 0;
    }
    else{
        coffeeGrindSize = 1;
        servingTemp = 1;
    }

    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",coffeeType,coffeeGrindSize,bagPackagedWeight,bestWithCream,servingTemp);


    if(coffeeStrength == 'm' || coffeeStrength == 'M'){
        coffeeType = 1;
    }
    else{
        coffeeType = 0;
    }

    if(coffeeWithCream == 'y' || coffeeWithCream == 'Y'){
        bestWithCream = 0;
    }
    else{
        bestWithCream = 1;
    }

    if(1<=numOfServings && numOfServings<=4){
        bagPackagedWeight= 0;
    }
    else if(5<=numOfServings && numOfServings<=9){
        bagPackagedWeight= 0;
    }
    else{
        bagPackagedWeight= 1;
    }

    if(coffeeMaker == 'r' || coffeeMaker == 'R'){
        coffeeGrindSize = 0;
        servingTemp = 0;
    }
    else{
        coffeeGrindSize = 1;
        servingTemp = 1;
    }

    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n",coffeeType,coffeeGrindSize,bagPackagedWeight,bestWithCream,servingTemp);
    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n\n");
    
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffeeStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeWithCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &numOfServings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &coffeeMaker);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    if(coffeeStrength == 'm' || coffeeStrength == 'M'){
        coffeeType = 1;
    }
    else{
        coffeeType = 0;
    }

    if(coffeeWithCream == 'y' || coffeeWithCream == 'Y'){
        bestWithCream = 1;
    }
    else{
        bestWithCream = 0;
    }

    if(1<=numOfServings && numOfServings<=4){
        bagPackagedWeight= 1;
    }
    else if(5<=numOfServings && numOfServings<=9){
        bagPackagedWeight= 0;
    }
    else{
        bagPackagedWeight= 0;
    }

    if(coffeeMaker == 'r' || coffeeMaker == 'R'){
        coffeeGrindSize = 1;
        servingTemp = 1;
    }
    else{
        coffeeGrindSize = 0;
        servingTemp = 0;
    }
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",coffeeType,coffeeGrindSize,bagPackagedWeight,bestWithCream,servingTemp);


    if(coffeeStrength == 'm' || coffeeStrength == 'M'){
        coffeeType = 0;
    }
    else{
        coffeeType = 1;
    }

    if(coffeeWithCream == 'y' || coffeeWithCream == 'Y'){
        bestWithCream = 0;
    }
    else{
        bestWithCream = 1;
    }

    if(1<=numOfServings && numOfServings<=4){
        bagPackagedWeight= 0;
    }
    else if(5<=numOfServings && numOfServings<=9){
        bagPackagedWeight= 1;
    }
    else{
        bagPackagedWeight= 0;
    }

    if(coffeeMaker == 'r' || coffeeMaker == 'R'){
        coffeeGrindSize = 0;
        servingTemp = 0;
    }
    else{
        coffeeGrindSize = 1;
        servingTemp = 1;
    }

    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",coffeeType,coffeeGrindSize,bagPackagedWeight,bestWithCream,servingTemp);


    if(coffeeStrength == 'm' || coffeeStrength == 'M'){
        coffeeType = 1;
    }
    else{
        coffeeType = 0;
    }

    if(coffeeWithCream == 'y' || coffeeWithCream == 'Y'){
        bestWithCream = 0;
    }
    else{
        bestWithCream = 1;
    }

    if(1<=numOfServings && numOfServings<=4){
        bagPackagedWeight= 0;
    }
    else if(5<=numOfServings && numOfServings<=9){
        bagPackagedWeight= 0;
    }
    else{
        bagPackagedWeight= 1;
    }

    if(coffeeMaker == 'r' || coffeeMaker == 'R'){
        coffeeGrindSize = 0;
        servingTemp = 0;
    }
    else{
        coffeeGrindSize = 1;
        servingTemp = 1;
    }

    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n",coffeeType,coffeeGrindSize,bagPackagedWeight,bestWithCream,servingTemp);
    printf("\nHope you found a product that suits your likes!\n");
    return 0;
}