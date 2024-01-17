#ifndef WEATHER_H
#define WEATHER_H


#define REGION_NAME_LENGTH 15
#define MAX_REGIONS 4
#define MAX_MONTHS 12
#define MAX_LOCS 8


struct Date
{
    int month;
    int year;
};

struct Location
{
    int regionCode;
    char name[REGION_NAME_LENGTH + 1];
};

struct WeatherRecord
{
    struct Date date;
    double precipAmt;
    char unit;
    struct Location location;

};

void MainMenu(struct WeatherRecord* record);

void ViewAll(struct WeatherRecord *record);
void ViewByRegionDescending(struct WeatherRecord* record);
void ViewByMonthAscending(struct WeatherRecord* record);
void ViewByLocationDescending(struct WeatherRecord* record);

int inputInt(void);
int inputIntRange(int lowerBound, int upperBound);

void StopPoint(void);
void clearInputBuffer();

double GetTotal(double* arr, int size);
int CompareString(const char str1[],const char str2[]);
int importWeatherDataFile(FILE* fp, struct WeatherRecord* data, int max);

#endif 