// Parallel Arrays
// parallel.c

#include <stdio.h>
# define size 10
int main(void)
{
    // store grades of all the students in your class
    // int id1 = ;
    // int number 1 = ;
    // you will need about 80 variables to store the id and the numbers


    // format type name [size]

    // int id [size] = {89,78,97,67,45,67,89,67,56,78};// an array that can hold 10 values 

    // for(int i = 0;i<size;i++){ // prints the values in the indexes starting from 0 to 9
    //     printf("%d\n",id[i]);
    // }
    // // the array must always have a fixed size when it is being defined
    // printf("%d", id[1]);// here the 1 represents the second index. i.e., the second value

//int grade[] = {0}; // i defined an array of size 1, and once its defined, I cannot change it
// int grade[] = {}; // i defined an unknown size of array

// grade[1] = 12;
// printf("%d", grade[1]);
// int class_size;
// printf("Enter the size of your class");
// scanf("%d", &class_size);

// int grade[class_size];// this defines an array of size class_size
// int id[class_size];

//printf("please enter the values of all the grades for the class size:");

// // loop to take input from user to put the values into the array
// for(int i=0;i<class_size;i++){
//     printf("marks: ");
//     scanf("%d", &grade[i]);
//     printf("id: ");
//     scanf("%d", &id[i]);

// }
// printf("stored values:\n");
// // here the grade and the id are parallen arrays because the two arrays are of the same size 

// // loop to print out the values saved in the array
// for(int i=0;i<class_size;i++){
//     printf("marks: %d | %d\n", grade[i], id[i]);
// }

    char arr [] = "This is the class of IPC144";
    printf("%c\n", arr[3]);// in this case the square brackets contain the index number
    printf("%s", arr);
// define three parallel arrays each of size wish list item


    return 0;
}