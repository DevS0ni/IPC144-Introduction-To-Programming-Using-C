 #include <stdio.h>

#define LISTSIZE 4
#define SAVINGS_BONUS 350.00
#define PURCHASE_BONUS 7000.00
#define BONUS_AMT 15.00

int main(void)
{
int purchaseSku[LISTSIZE] = { 111, 333, 222 };
double purchasePrice[LISTSIZE] = { 500.0, 250.00, 750.00 };
int purchaseQty[LISTSIZE] = { 3, 10, 4 };
double purchase, bonus, totalPurchase = 0.0, totalSavings = 0.0;

int sales[LISTSIZE] = { 101, 222, 404, 111 };
double saleDiscount[LISTSIZE] = { 0.05, 0.15, 0.30, 0.35 };
int saleMinQty[LISTSIZE] = { 5, 5, 4, 3 };

int i, j, sale, savingsBonus, purchaseBonus, moreItems = 1;

for (i = 0; moreItems && i < LISTSIZE; i++)
{
if (purchaseSku[i] > 0)
{
purchase = purchasePrice[i] * purchaseQty[i];

for (j = 0, sale = 0; !sale && j < LISTSIZE; j++) 
 {
if (purchaseSku[i] == sales[j] && purchaseQty[i] >= saleMinQty[j])
{
totalSavings += purchase * saleDiscount[j];
sale = 1;
}
}

totalPurchase += purchase;
}
else
{
moreItems = 0;
}
}

savingsBonus = totalSavings >= SAVINGS_BONUS;
purchaseBonus = totalPurchase >= PURCHASE_BONUS;

if (savingsBonus && purchaseBonus)
{
bonus = BONUS_AMT * 1.5;
}
else if (purchaseBonus && !savingsBonus)
{
bonus = BONUS_AMT * 2.0;
}
else if (!(savingsBonus || purchaseBonus)) 
 {
bonus = BONUS_AMT / 2.0;
}
else
{
bonus = BONUS_AMT;
}

printf("Total Purchases: $%8.2lf\n", totalPurchase);
printf("Total Savings : $%8.2lf\n", totalSavings);
printf("Total Owed : $%8.2lf\n", totalPurchase - totalSavings);
printf("Bonus Earned : $%8.2lf\n", bonus);

return 0;
} 

