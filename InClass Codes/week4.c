#include<stdio.h>

int main()
{
    int value = 3;
    
    // to print the F, Ws and so on....
    
    // for(int i = 0;i<3;i++){
    //     printf("F");
    // }
    // int i = 0;
    // while(i<3){
    //     printf("W");
    //     i++;
    // }

    int x;
    char c;
    //printf("please enter the character and the digit: ");
    int flag = 1;
    do{
        printf("please enter a character and a number, press x0 to stop");
        scanf(" %c%d",&c,&x); 
// loop type must be D, W, F, Q : switch default("error, wrong input") (uppercase)
// lower case should give an error
// if(x>2 && x<21)
    switch(c){
        case 'A':
            printf("A");
            break;
        case 'x':
            if(x==0)
                flag = 0;
            break;
        default:
            printf("error here");        
    }
    //....
    //else you get error

    } while(flag==1);

    
    return 0;
}