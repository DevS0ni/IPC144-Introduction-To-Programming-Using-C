// IPC144 2022 Final Assessment Coding Project
// --------------------------------------------------
// Project idea is based on COSEWIC reports for SAR
//
//      COSEWIC: Committee on the Status of Endangered Wildlife in Canada
//      SAR:     Species At Risk
//
// Source: https://bit.ly/3AEgab9
//
// Note: The data used for this assignment has been fictionalized with invalid counts

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "cosewic.h"

#define DATA_FILE "data.csv"

#define MAX_RECORDS 6500

int main(void)
{
    int records;
    struct FileData data[MAX_RECORDS] = { {0} };
    printf("Loading data from file: %s\n", DATA_FILE);
    records = loadData(DATA_FILE, data, MAX_RECORDS);
    printf("%d data records read from file...\n\n", records);

    if (records > 0)
    {
        // Entry point to application logic
      mainLogic(data, records);
    }
    else
    {
        printf("Ooooops there seems to have been an error loading data!\n");
    }

    return 0;
}

/* Sample Inputs:
-1
5
1
2
3
4
-1
14
9
-1
11
4
4
7
8

*/
