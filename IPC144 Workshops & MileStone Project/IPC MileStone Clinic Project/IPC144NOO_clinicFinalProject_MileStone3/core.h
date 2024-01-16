/*
*****************************************************************************
                        Assignment 1 - Milestone 3
Full Name  : Dev Soni
Student ID#: 130759210
Email      : dasoni4@myseneca.ca
Section    : NOO
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

// SAFE-GUARD: 
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

int inputInt(void); //it makes sure integer value is entered and returned. Also, displays error if invalid value is entered

int inputIntPositive(void); //it makes sure the value entered is greater than zero. Also, it gives an error is negative value or zero is entered

int inputIntRange(int lowerBound, int upperBound); //it accepts a value within certain range and displays an error if value is entered outside from the range

char inputCharOption(char str[]); //it accepts a single character value from the user with the valid characters

void inputCString(char* str, int minChar, int maxChar);  //it makes sure that the value entered is a string value with characters within specific range

void inputCStringNumbers(char* str, int minChar, int maxChar); // This function is the same as inputCString but is exclusively for numbers

void displayFormattedPhone(const char* str); //it makes sure 10 character digits array is entered as in phone number

// !!! DO NOT DELETE THE BELOW LINE !!! 
#endif // !CORE_H
