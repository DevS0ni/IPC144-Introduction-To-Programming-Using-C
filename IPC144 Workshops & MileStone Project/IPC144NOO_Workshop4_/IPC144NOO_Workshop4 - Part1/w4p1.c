/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  : SONI DEV ALPESHBHAI
Student ID#: 130759210
Email      : dasoni4@myseneca.ca
Section    : NOO
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    
    int x,i;
    char c;
    int flag=1;

    do{
        printf("\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d",&c,&x); 

        if(c=='D' && (x>=3 && x<=20)){
            printf("DO-WHILE: ");
            for(i=0;i<x;i++){
                printf("%c",c);
            }
            printf("\n");
        }

        else if(c=='W' && (x>=3 && x<=20)){
            printf("WHILE   : ");
            for(i=0;i<x;i++){
                printf("%c",c);
            }
            printf("\n");
        }

        else if(c=='F' && (x>=3 && x<=20)){
            printf("FOR     : ");
            for(i=0;i<x;i++){
                printf("%c",c);
            }
            printf("\n");
        }
        
        else if(c=='Q' && x==0){
            if(x==0)
                flag = 0;
        }

        else{
                if(c!='D' && c!='W' && c!='F' && c!='Q'){
                    printf("ERROR: Invalid entered value(s)!\n");  
                }
                else if(c=='Q' && x!=0){
                    printf("ERROR: To quit, the number of iterations should be 0!\n");
                }
                
                else{
                    printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
                }  
            }
    } while(flag==1);

    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");



    return 0;
}