 // Logical Expressions
 // logical.c
 #include <stdio.h>

 int main(void)
 {
         int i, j, k, m;

         printf("Enter an integer : ");
         scanf("%d", &i);
         printf("Enter an integer : ");
         scanf("%d", &j);
         printf("Enter an integer : ");
         scanf("%d", &k);

         m = j >= i && j <= k; // store the value of this expression in m

         printf("%d >= %d and %d <= %d yields %d\n", j, i, j, k, m);

         return 0;
 }