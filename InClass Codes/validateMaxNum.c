// File Name : validateMaxNum.c

// C standard Library for standard I/O funtions.
#include<stdio.h>

// Prototype of the Function to check the Maximum value among the three numbers.
int maxNum(int, int, int);

// The Start-up Main function
int main(void){

    // Declaration of the three numbers, with initialization.
    int num1;
    int num2;
    int num3;

    // Taking the three inputs for variables: n1, n2, n3..
    printf("Enter the values of numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Printing the resultant maximum value among the three values passed through the function.
    printf("The Max number among the three numbers passed is: %d", maxNum(num1,num2,num3));

    return 0;
}

// Definition of the Function to check the Maximum value among the three numbers.
int maxNum(int num1, int num2, int num3){

    // This variable will contain the max value among the three..
    int maxNum = 0;

    // Checking the max number among the three...

    // If num 1 > num2 and num3
    if(num1 >= num2 && num1 >= num3){
        maxNum = num1;
    }
    // If num2 > num1 and num 3
    else if(num2 >= num1 && num2 >= num3){
        maxNum = num2;
    }
    // If all conditions are invalid, then maxNum = num3
    else{
        maxNum = num3;
    }

    // Returning the maxNum
    return maxNum;
}