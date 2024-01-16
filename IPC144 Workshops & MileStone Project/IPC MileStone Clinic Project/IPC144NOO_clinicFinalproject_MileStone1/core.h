/*
***************************
                        Assignment 1 - Milestone 1
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

#include <stdio.h>

// Clear the standard input buffer 
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue 
void suspend(void);

// This function ensures that an integer value is entered and returned. If an invalid value is entered, an error message will be prompted.
int inputInt(void);

// This function ensures that a positive integer value is entered and returned. If a zero or a negative value is entered, an error message will be prompted.
int inputIntPositive(void);

// This function ensures that an integer value is entered within the range (inclusive) and returned. If a value from outside the range is entered, an error message will be displayed and it will continue to prompt until a value in the given range is entered.
int inputIntRange(int lowerBound, int upperBound);

// This function ensures that a single character value is entered within the list of valid characters and returned. If an entered character is not in the list of valid characters, an error message will be displayed and will prompt us again.
char inputCharOption(char str[]);

// This function ensures that a C string value is entered, containing the number of characters within the range specified by the 2nd and 3rd arguments of the functions.
void inputCString(char* str, int minChar, int maxChar);

// The purpose of this function is to display an array of 10-character digits as in formatted phone number.
void displayFormattedPhone(char* str);
