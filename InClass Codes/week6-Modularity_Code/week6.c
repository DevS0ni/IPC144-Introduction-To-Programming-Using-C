// logic
#include<stdio.h>

int num1, num2, sum;

void save(int *x, int *y){
    int temp1, temp2;
    printf("enter the first number: ");
    scanf("%d", &temp1);
    printf("enter the second number: ");
    scanf("%d", &temp2);
    *x = temp1;
    *y = temp2;
}
int add(int a, int b){
    return a+b;
}

void print(int z){
    printf("the sum is %d", z);
}

void start(void){
    save(&num1, &num2);
    sum = add(num1,num2);
    print(sum);
}

