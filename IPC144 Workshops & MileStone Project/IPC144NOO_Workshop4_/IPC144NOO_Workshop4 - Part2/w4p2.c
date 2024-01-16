/*
*****************************************************************************
                          Workshop - #4 (P2)
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
    int numApples,numOranges,numPears,numTomatoes,numCabbages,flag=1;
    do{
        printf("Grocery Shopping\n");
        printf("================\n");
        do{
            printf("How many APPLES do you need? : ");
            scanf("%d",&numApples);
            if(numApples<0){
                printf("ERROR: Value must be 0 or more.\n");
            }
            else{
                printf("\n");
                flag = 0;
            }
        }while(flag==1);

        flag = 1;

        do{
            printf("How many ORANGES do you need? : ");
            scanf("%d",&numOranges);
             if(numOranges<0){
                 printf("ERROR: Value must be 0 or more.\n");
             }
             else{
                 printf("\n");
                 flag=0;
             }
         }while(flag==1);

         flag = 1;

         do{
             printf("How many PEARS do you need? : ");
             scanf("%d",&numPears);
             if(numPears<0){
                 printf("ERROR: Value must be 0 or more.\n");
             }
             else{
                 printf("\n");
                 flag=0;
             }
         }while(flag==1);

         flag = 1;

         do{
             printf("How many TOMATOES do you need? : ");
             scanf("%d",&numTomatoes);
             if(numTomatoes<0){
                 printf("ERROR: Value must be 0 or more.\n");
             }
             else{
                 printf("\n");
                 flag=0;
             }
         }while(flag==1);

         flag = 1;

         do{
             printf("How many CABBAGES do you need? : ");
             scanf("%d",&numCabbages);
             if(numCabbages<0){
                 printf("ERROR: Value must be 0 or more.\n");
             }
             else{
                 printf("\n");
                 flag=0;
             }
        }while(flag==1);

        flag = 1;

        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        int pickApples = 0,pickPears,pickOranges,pickCabbages,pickTomatoes,loopTerminator;

        int applesInBag = 0;

        if(numApples!=0){
            do{   
                printf("Pick some APPLES... how many did you pick? : "); 
                scanf("%d",&pickApples);
                
                if((pickApples + applesInBag) == numApples){
                        printf("Great, that's the apples done!\n\n");
                        flag=0;
                }
                else if(pickApples<=0){
                    printf("ERROR: You must pick at least 1!\n");
                }

                else if((applesInBag + pickApples) > numApples){
                    
                    printf("You picked too many... only %d more APPLE(S) are needed.\n",(numApples - applesInBag));
                }
                
                else if(pickApples<numApples){
                    applesInBag += pickApples;
                    printf("Looks like we still need some APPLES...\n");
                }

                else{
                    printf("ERROR !\n\n");
                }
                
            }while(flag==1);
        }

        flag = 1;
        int OrangesInBag = 0;

        if(numOranges!=0){
            do{   
                printf("Pick some ORANGES... how many did you pick? : "); 
                scanf("%d",&pickOranges);
                
                if((pickOranges+OrangesInBag)==numOranges){
                        printf("Great, that's the oranges done!\n\n");
                        flag = 0;
                }
                else if(pickOranges<=0){
                    printf("ERROR: You must pick at least 1!\n");
                }

                else if((pickOranges+OrangesInBag)>numOranges){
                    
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n",(numOranges - OrangesInBag));
                }
                
                else if(pickOranges<numOranges){
                    OrangesInBag += pickOranges;
                    printf("Looks like we still need some ORANGES...\n");
                }

                else{
                    printf("ERROR !\n\n");
                }
                
            }while(flag==1);
        }

        flag = 1;
        int pearsInBag = 0;

        if(numPears!=0){
            do{   
                printf("Pick some PEARS... how many did you pick? : "); 
                scanf("%d",&pickPears);
                
                if((pickPears+pearsInBag)==numPears){
                        printf("Great, that's the pears done!\n\n");
                        flag = 0;
                }
                else if(pickPears<=0){
                    printf("ERROR: You must pick at least 1!\n");
                }

                else if((pickPears+pearsInBag)>numPears){
                    
                    printf("You picked too many... only %d more PEAR(S) are needed.\n",(numPears - pearsInBag));
                }
                
                else if(pickPears<numPears){
                    pearsInBag += pickPears;
                    printf("Looks like we still need some PEARS...\n");
                }

                else{
                    printf("ERROR !\n\n");
                }
                
            }while(flag==1);
        }

        flag = 1;
        int TomatoesInBag = 0;

        if(numTomatoes!=0){
            do{   
                printf("Pick some TOMATOES... how many did you pick? : "); 
                scanf("%d",&pickTomatoes);
                
                if((pickTomatoes+TomatoesInBag)==numTomatoes){
                        printf("Great, that's the tomatoes done!\n\n");
                        flag=0;
                }
                else if(pickTomatoes<=0){
                    printf("ERROR: You must pick at least 1!\n");
                }

                else if((pickTomatoes+TomatoesInBag)>numTomatoes){
                    
                    printf("You picked too many... only %d more TOMATO(ES) are needed.\n",(numTomatoes - TomatoesInBag));
                }
                
                else if(pickTomatoes<numTomatoes){
                    TomatoesInBag += pickTomatoes;
                    printf("Looks like we still need some TOMATOES...\n");
                }

                else{
                    printf("ERROR !\n\n");
                }
                
            }while(flag==1);
        }

        flag = 1;
        int CabbagesInBag = 0;

        if(numCabbages!=0){
            do{   
                printf("Pick some CABBAGES... how many did you pick? : "); 
                scanf("%d",&pickCabbages);
                
                if((pickCabbages+CabbagesInBag)==numCabbages){
                        printf("Great, that's the cabbages done!\n\n");
                        flag=0;
                }
                else if(pickCabbages<=0){
                    printf("ERROR: You must pick at least 1!\n");
                }

                else if((pickCabbages+CabbagesInBag)>numCabbages){
                    
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n",(numCabbages - CabbagesInBag));
                }
                
                else if(pickCabbages<numCabbages){
                    CabbagesInBag += pickCabbages;
                    printf("Looks like we still need some CABBAGES...\n");
                }

                else{
                    printf("ERROR !\n\n");
                }
                
            }while(flag==1);
        }

        flag = 1;

        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d",&loopTerminator);
        printf("\n");

        if(loopTerminator==0){
            flag=0;
        }

    }while(flag==1);

    printf("Your tasks are done for today - enjoy your free time!\n");
    return 0;
}