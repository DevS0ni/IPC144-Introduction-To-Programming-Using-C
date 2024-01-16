 // Promotion with Assignment Operators
 // promotion.c
 #include <stdio.h>

 int main(void)
 {
         int loonies;
         double cash;

         printf("Loonies ? ");
         scanf("%d", &loonies);
         cash = loonies; // promotion
         printf("Cash is $%.2lf\n", cash);

         return 0;
 }