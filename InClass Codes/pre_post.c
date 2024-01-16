// Prefix and Postfix Operators
// pre_post.c
 #include <stdio.h>

 int main(void)
 {
         int age = 19;

         printf("Prefix:  %d\n", ++age);
         printf("         %d\n", age);
         printf("Postfix: %d\n", age++);
         printf("         %d\n", ++age);

         return 0;
 }