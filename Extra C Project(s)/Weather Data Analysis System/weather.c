#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "weather.h"



void ViewAll(struct WeatherRecord* records)
{

    printf("Year Month Precip.Amt Unit Region Name\n"
        "---- ----- ---------- ---- ------ ---------------\n");
    int i;
    for (i=0;records[i].date.year > 0 && records[i].date.month > 0 && records[i].precipAmt >= 0 && records[i].unit != '\0' && records[i].location.name != '\0' && records[i].location.regionCode != 0;i++)
    {
        if (i % 15 == 0&&i>0)
        {
            printf("\n");
            StopPoint();
        }
        printf("%d    %02d %10.1lf %4c %6d %s", records[i].date.year, records[i].date.month,
            records[i].precipAmt, records[i].unit, records[i].location.regionCode, records[i].location.name);
        printf("\n");
        
    }
    printf("\n");
}


void MainMenu(struct WeatherRecord* records)
{
    int choice;
    do {
        printf("=======================================================\n");
        printf("         Ontario Weather Analysis Service         \n");
        printf("                  Year: 2023                  \n");
        printf("=======================================================\n");
        printf("1. View all records\n");
        printf("2. View by region (sorted DESCENDING by precip.)\n");
        printf("3. View by month (sorted ASCENDING by precip.)\n");
        printf("4. View by location name (sorted DESCENDING by precip.)\n");
        printf("-------------------------------------------------------\n");
        printf("0. Exit\n");
        printf("-------------------------------------------------------\n");
        printf("Selection: ");
        choice = inputIntRange(0, 4);
        putchar('\n');
        switch (choice)
        {
        case 0:
            printf("Application Terminated!\n\n");
            break;
        case 1:
            ViewAll(records);
            break;
        case 2:
            ViewByRegionDescending(records);
            break;
        case 3:
            ViewByMonthAscending(records);
            break;
        case 4:
            ViewByLocationDescending(records);
            break;
        }
    } while (choice);
}

void ViewByRegionDescending(struct WeatherRecord* records)
{
	printf("Region Name     Precip(mm)\n");
	printf("------ -------- ----------\n");
    char regNames[MAX_REGIONS][REGION_NAME_LENGTH + 1] = { {"Western"},{"Northern"},{"Eastern"},{"Central"} };
	int places[MAX_REGIONS] = { 10, 20, 30, 40 };
    double pAmp[MAX_REGIONS] = { 0 };
    int ind=0;
    int i;
    for (i = 0;records[i].date.year > 0 && records[i].date.month > 0 && records[i].precipAmt >= 0 && records[i].unit != '\0' && records[i].location.name != '\0' && records[i].location.regionCode != 0;i++)
    {
        if (records[i].location.regionCode == 10)
        {
            ind = 0;
        }
        else if (records[i].location.regionCode == 20)
        {
            ind = 1;
        }
        else if (records[i].location.regionCode == 30)
        {
            ind = 2;
        }
        else if (records[i].location.regionCode == 40)
        {
            ind = 3;
        }
        if (records[i].unit == 'c')
        {
            pAmp[ind] += records[i].precipAmt * 10;
        }
        else  if (records[i].unit == 'm')
        {
            pAmp[ind] += records[i].precipAmt;
        }
        
    }
    int j,t;
    for (i = 0; i < MAX_REGIONS; i++)
    {
        for (j = i + 1; j < MAX_REGIONS; j++)
        {
            if (pAmp[i] < pAmp[j])
            {
                t = places[i];
                places[i] = places[j];
                places[j] = t;
                t = pAmp[i];
                pAmp[i] = pAmp[j];
                pAmp[j] = t;
            }
        }
    }
    for (i = 0;i < MAX_REGIONS;i++)
    {

        printf("%6d ", places[i]);
        if (places[i] == 10)
        {
            printf("%8s", regNames[0]);

        }
        else if (places[i] == 20)
        {
            printf("%8s", regNames[1]);

        }
        else if (places[i] == 30)
        {
            printf("%8s", regNames[2]);

        }
        else if (places[i] == 40)
        {
            printf("%8s", regNames[3]);
        }
        printf(" %10d",(int) pAmp[i]);
        printf("\n");
    }
    printf("------ -------- ----------\n");
    double total = GetTotal(pAmp,MAX_REGIONS);
    double Average = total / MAX_REGIONS;
    printf("         Total: %10d\n",(int)total);
    printf("       Average: %10.2lf\n",Average);
    printf("\n");

}
double GetTotal(double *arr,int size)
{
    double sum = 0;
    int i;
    for (i = 0;i < size;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}



void ViewByMonthAscending(struct WeatherRecord* records)
{

    char Cmonths[MAX_MONTHS][10] = {
        { "January" }, { "February" }, { "March" }, { "April" },
        { "May" }, { "June" }, { "July" }, { "August" }, { "September" },{ "October" }
        , { "November" }, { "December" } };

    int months[MAX_MONTHS] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    double pAmp[MAX_MONTHS] = { 0 };
	printf("Month     Precip(mm)\n");
	printf("--------- ----------\n");
    int i;
    for (i = 0;records[i].date.year > 0 && records[i].date.month > 0 && records[i].precipAmt >= 0 && records[i].unit != '\0' && records[i].location.name != '\0' && records[i].location.regionCode != 0;i++)
    {

        if (records[i].unit == 'c')
        {
            pAmp[records[i].date.month-1] += records[i].precipAmt * 10;
        }
        else  if (records[i].unit == 'm')
        {
            pAmp[records[i].date.month - 1] += records[i].precipAmt;
        }
    }
    int j, temp;
    for (i = 0; i < MAX_MONTHS; i++)
    {
        for (j = i + 1; j < MAX_MONTHS; j++)
        {
            if (pAmp[i] > pAmp[j])
            {
                temp = pAmp[i];
                pAmp[i] = pAmp[j];
                pAmp[j] = temp;
                temp = months[i];
                months[i] = months[j];
                months[j] = temp;
            }
        }
    }

    for (i = 0;i < MAX_MONTHS;i++)
    {
        printf("%-9s", Cmonths[months[i]-1]);
        printf(" %10d", (int)pAmp[i]);
        printf("\n");
    }
    printf("--------- ----------\n");

    double total = GetTotal(pAmp,MAX_MONTHS);
    double Average = total / MAX_MONTHS;
    printf("   Total: %10d\n", (int)total);
    printf(" Average: %10.2lf\n", Average);
    printf("\n");

}
void ViewByLocationDescending(struct WeatherRecord* records)
{

    printf("Location        Precip(mm)\n");
    printf("--------------- ----------\n");
    struct LocData
    {
        float pAmps;
        char locations[REGION_NAME_LENGTH + 1];
    };
    struct LocData tdata[MAX_LOCS] = { {0,"Kenora"} ,{ 0,"Simcoe" }, { 0,"Essex" }, { 0,"Ottawa" },
    { 0,"Chatham-Kent" }, { 0,"Halton" }, { 0,"Renfrew" }, { 0,"Thunder Bay" } };
   

    int i;
    for (i = 0;records[i].date.year > 0 && records[i].date.month > 0 && records[i].precipAmt >= 0 && records[i].unit != '\0' && records[i].location.name != '\0' && records[i].location.regionCode != 0;i++)
    {
        int ind;
        for (ind = 0;ind < MAX_LOCS;ind++)
        {
            if (CompareString(records[i].location.name, tdata[ind].locations)==1)
            {
                if (records[i].unit == 'c')
                {
                    tdata[ind].pAmps += records[i].precipAmt * 10;
                    ind = MAX_LOCS;
                }
                else if (records[i].unit == 'm')
                {
                    tdata[ind].pAmps += records[i].precipAmt;
                    ind = MAX_LOCS;
                }
            }   
        }
    }
    int j;
    struct LocData t;
    char  tarr[REGION_NAME_LENGTH+1]={'\0'};
    for (i = 0; i < MAX_LOCS; i++)
    {
        for (j = i + 1; j < MAX_LOCS; j++)
        {
            if (tdata[i].pAmps < tdata[j].pAmps)
            {
                t = tdata[i];
                tdata[i] = tdata[j];
                tdata[j] = t;
            }
        }
    }

    for (i = 0;i < MAX_LOCS;i++)
    {
        printf("%15s ", tdata[i].locations);
        printf("%10d", (int)tdata[i].pAmps);
        printf("\n");
    }
    printf("--------------- ----------\n");
    double total = 0;
    for (i = 0;i < MAX_LOCS;i++)
    {
        total =total+ tdata[i].pAmps;
    }
    double Avg = total / MAX_LOCS;
    printf("         Total: %10d\n", (int)total);
    printf("       Average: %10.2lf\n", Avg);
    printf("\n");

}


void clearInputBuffer()
{
    while (getchar() != '\n')
    {
        ; 
    }
}
void StopPoint()
{
    printf("< Press [ENTER] key to continue >");
    clearInputBuffer();
    putchar('\n');
}

int importWeatherDataFile(FILE* fp, struct WeatherRecord* data, int max)
{
    int temp = 0;
    if (fp != NULL)
    {
        while (temp < max && fscanf(fp, "%d,%d,%lf,%c,%d,%15[^\n]\n",
            &data[temp].date.year, &data[temp].date.month,
            &data[temp].precipAmt, &data[temp].unit,
            &data[temp].location.regionCode,
            data[temp].location.name) == 6)
        {
            temp++;
        }
    }
    return temp;
}

int inputInt()
{
    int value;
    char newLine = 'a';
    while (newLine != '\n')
    {
        scanf("%d%c", &value, &newLine);
        if (newLine != '\n') {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }
    }
    return value;
}
int inputIntRange(int lowerBound, int upperBound)
{
    int num = upperBound + 1;
    while (!(num >= lowerBound && num <= upperBound)) {
        num = inputInt();
        if (!(num >= lowerBound && num <= upperBound)) {
            printf("ERROR! Value must be between %d and %d inclusive: ", lowerBound, upperBound);
        }
    }
    return num;
}
int CompareString(const char str1[],const char str2[])
{
    int isMatched = 1;
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            isMatched = 0;
        }
    }
    return isMatched;
}


