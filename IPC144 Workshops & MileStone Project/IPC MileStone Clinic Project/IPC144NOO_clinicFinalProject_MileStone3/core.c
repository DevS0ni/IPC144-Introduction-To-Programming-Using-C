/*
***************************
                        Assignment 1 - Milestone 3
Full Name  : Soni Dev Alpeshbhai
Student ID#: 130759210
Email      : dasoni4@myseneca.ca
Section    : NOO
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
***************************
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

// Wait for user to input the "enter" key to continue 
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}


//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

//
// Copy your work done from Milestone #2 (core.c) into this file
// - Organize your functions in the same order as they are listed in the core.h file



//////////////////////////////////////
// UTILITY FUNCTIONS
//////////////////////////////////////

int inputInt(void) { // SAFE-GUARD: 
// It is good practice to apply safe-guards to header files
// Safe-guard's ensures only 1 copy of the header file is used in the project build
// The macro name should be mirroring the file name with _ for spaces, dots, etc.

// !!! DO NOT DELETE THE BELOW 2 LINES !!!
#ifndef CORE_H
#define CORE_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// Copy your work done from Milestone #1 (core.h) into this file
// 
// NOTE:
// - Organize your functions into the below categories
// - Make sure the core.c file also lists these functions in the same order!
// - Be sure to provide a BRIEF comment for each function prototype
// - The comment should also be copied to the core.c function definition
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


////////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
    void clearInputBuffer(void);

    // Wait for user to input the "enter" key to continue
    void suspend(void);

    //////////////////////////////////////
    // USER INPUT FUNCTIONS
    //////////////////////////////////////

    int inputInt(void);
    int inputIntPositive(void);

    int inputIntRange(int lowerBound, int upperBound);

    char inputCharOption(char str[]);

    void inputCString(char* str, int minChar, int maxChar);

    void inputCStringNumbers(char* str, int minChar, int maxChar);

    void displayFormattedPhone(const char* str);


    // !!! DO NOT DELETE THE BELOW LINE !!! 
#endif // !CORE_H

    char input_char = ' ';
    int value;

    do {
        scanf("%d%c", &value, &input_char);

        if (input_char != '\n') {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }
    } while (input_char != '\n');

    return value;
}

int inputIntPositive(void)  
{
    char input_char = ' ';
    int value;

    do {
        scanf("%d%c", &value, &input_char);

        if (input_char != '\n') {
            clearInputBuffer();
            printf("Error! Input a number: ");
        }

        if (value <= 0) {
            printf("ERROR! Value must be > 0: ");
        }
    } while (value <= 0);

    return value;
}

int inputIntRange(int lowerBound, int upperBound)  
{
    char input_char = ' ';
    int value;

    do {
        scanf("%d%c", &value, &input_char);

        if (input_char != '\n') {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }

        else if (!(value <= upperBound && value >= lowerBound)) {
            printf("ERROR! Value must be between %d and %d inclusive: ", lowerBound, upperBound);
        }
    } while (!(value <= upperBound && value >= lowerBound));

    return value;
}

char inputCharOption(char str[])
{
    int i, count = 0;
    char entry;

    do {
        scanf(" %c", &entry);

        for (i = 0; str[i] != '\0'; i++) {
            if (entry == str[i]) {
                count++;
            }
        }

        if (count == 0) {
            printf("ERROR: Character must be one of [%s]: ", str);
        }
    } while (count == 0);

    clearInputBuffer();
    return entry;
}

void inputCString(char* str, int minChar, int maxChar) 
{
    int flag = 1;
    char charac = 'a';

    while (flag) {
        int len = 0;
        while (charac != '\n' && len <= maxChar) {
            charac = getchar();
            str[len] = charac;
            len++;
        };
        if (charac == '\n' && len <= (maxChar + 1)) {
            len--;
            str[len] = '\0';
        }
        else {
            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && len != minChar) {
            printf("ERROR: String length must be exactly %d chars: ", minChar);
            charac = 'a';
        }
        else if (len < minChar || len > maxChar) {
            if (len > maxChar) {
                printf("ERROR: String length must be no more than %d chars: ", maxChar);
                charac = 'a';
            }
            else if (len < minChar) {
                printf("ERROR: String length must be between %d and %d chars: ", minChar, maxChar);
                charac = 'a';
            }
        }
        else {
            flag = 0;
        }
    }
}

void inputCStringNumbers(char* str, int minChar, int maxChar) 
{
    int flag = 1;
    char charac = 'a';

    while (flag) {
        int len = 0;
        while (charac != '\n' && len <= maxChar) {
            charac = getchar();
            str[len] = charac;
            len++;
        };
        if (charac == '\n' && len <= (maxChar + 1)) {
            len--;
            str[len] = '\0';
        }
        else {
            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && len != minChar) {
            printf("Invalid 10-digit number! Number: ");
            charac = 'a';
        }
        else {
            flag = 0;
        }
    }
}

void displayFormattedPhone(const char* str) {
    int length = 0, i;

    length = strlen(str);

    if (length == 10) {
        i = 0;
        printf("(");
        while (i < 3) {
            printf("%c", str[i]);
            i++;
        }
        printf(")");
        while (i < 6) {
            printf("%c", str[i]);
            i++;
        }
        printf("-");
        while (i < 10) {
            printf("%c", str[i]);
            i++;
        }
    }
    else {
        printf("(___)___-____");
    }
    if (str != 0) {
        for (i = 0; str[i] != '\0'; i++)
            length++;
    }
}