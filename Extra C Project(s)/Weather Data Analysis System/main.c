#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "weather.h"

#define MAX_RECORDS 250



int main(void)
{
	struct WeatherRecord records[MAX_RECORDS] = { 0 };
    FILE* fp;
    int totalRecords = 0;
    fp = fopen("weatherdata.txt", "r");
    if (fp != NULL)
    {
        totalRecords = importWeatherDataFile(fp, records, MAX_RECORDS);
        fclose(fp);
        MainMenu(records);

    }
    else
    {
        printf("\nERROR: File does not exist!!!\n\n");
    }
    
	return 0;
}