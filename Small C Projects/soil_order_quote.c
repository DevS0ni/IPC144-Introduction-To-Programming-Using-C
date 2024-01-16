 #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PRICE_PER_CU_YARD 66.79
#define DELIVERY_BASE_DISTANCE 30
#define DELIVERY_BASE_CHARGE 50.00
#define PRICE_PER_KM 2.33

#define DISCOUNT_STEP 5
#define TAX 0.13

#define DISCOUNTS 5

int main(void)
{
// Variables
int discountPercent[DISCOUNTS] = { 10, 15, 15, 20, 25 };
int freeDelivery[DISCOUNTS] = { 0, 0, 1, 1, 1 };
int discountCategory;
int cuYards, soilFees, taxes, discount, delivery, subtotal;
double distance;
int quoting = 1; 
 while (quoting)
{
printf("Soil Order Quote System\n"
"-----------------------\n\n");

printf("\t# of Cubic Yards of Soil: ");
scanf("%d", &cuYards);

printf("\tDelivery Distance (km) : ");
scanf("%lf", &distance);
printf("\t------------------------------\n");

discountCategory = cuYards / DISCOUNT_STEP;
if (cuYards % DISCOUNT_STEP == 0)
{
discountCategory--;
}

soilFees = (int)(((cuYards * PRICE_PER_CU_YARD) + 0.005) * 100);

discount = 0;

if (cuYards > 2)
{
discount = (int)((soilFees * (discountPercent[discountCategory] / 100.0)) + 0.5); 
 }

delivery = 0;
if (!freeDelivery[discountCategory])
{
delivery = (DELIVERY_BASE_CHARGE * 100);
if (distance > DELIVERY_BASE_DISTANCE)
{
delivery += (int)((((distance - DELIVERY_BASE_DISTANCE) * PRICE_PER_KM) + 0.005) * 100);
}
}

taxes = (int)(((soilFees * TAX) + 0.5) );

subtotal = soilFees + delivery + taxes;

printf("\tCubic Yards Ordered: %d\n", cuYards);
printf("\tDelivery Distance : %.1lf km\n", distance);
printf("\t------------------------------\n");
printf("\tSoil Charge : $%8.2lf\n", soilFees / 100.0);
printf("\tDelivery Charge : $%8.2lf\n", delivery ? (double)delivery / 100 : (double)delivery); 
 printf("\tTaxes : $%8.2lf\n", taxes / (double)100);
printf("\t ---------\n");
printf("\tSub-Total : $%8.2lf\n", subtotal / 100.0);
printf("\tDiscounts : $%8.2lf\n", (double)discount / 100);
printf("\t------------------------------\n");
printf("\tTotal : $%8.2lf\n\n", (double)(subtotal - discount) / 100);

printf("Perform another quote? (0=Done): ");
scanf("%d", &quoting);
putchar('\n');
}

return 0;
} 