#include <stdio.h>

//  no return, no parameter
void printing(){
    printf("this is gonna be printed\n");
    printf("this will also be printed\n");
}

// no return, parameter there

// void calculations(int a, int b){
//     printf("this is from the calculations function with no return %d\n", a+b);
// }


// no parameter, return there

int calculate_input(){
    int input1, input2, total = 0;
    printf("enter the first input:");
    scanf("%d",&input1);
    printf("enter the second input:");
    scanf("%d",&input2);
    total = input1+input2;
    return total;
}

// return present and parameters present
// int calculation(int a, int b, char c){// order of parameters here are extremely inportant and must match the order it was sent in from main
//     // here all the calculation are calculation
//     int total = 0;
//     if(c=='+')
//         total = a+b;
//     else if(c=='-')
//         total = a-b;// assume a is always > b
//     else
//         total = a*b;        

//     return total;// the type of this return is int and is specified just before the name of the function
// }
// high coupling between these two modules
// int add(int a, int b){

// }
// int subtract(int a, int b){

// }



int main(void)
{

    // execute different instructions one after another
    // your code is efficient
    // you are not writing the same thing again
    //  repition = inefficiency
    // array - int grade[20]; 
//  coffee workshop coffee1 coarse, grind

// this code will take input from user and add the numbers together

int input1 = 15, input2 = 6, total;

// total = calculation(input1, input2, '%');// the total here is storing the value returned by the function 

// calculations(input1, input2);

//printf("%d", total);
// when you reach here you transfert control to the function printing, executre everything in the function
// and then return back to the main function
printing();// the function printing is being called here in the main function

total = calculate_input();
printf("printing the result from when we take input from user and return the result %d", total);

// each module has one entry point and one exit point
//  functions be highly cohesibe and show less coupling

// each module is highly cohesive
// each module exhibits low coupling


// keep on taking input from user and adding the inputs until you stop

    return 0;
}