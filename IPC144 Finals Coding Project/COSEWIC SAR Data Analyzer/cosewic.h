/*
 author : Soni Dev Alpeshbhai
 e-mail : dasoni4@myseneca.ca
 IPC144 - Final Coding
 */
#ifndef cosewic_h
#define cosewic_h
#include <stdio.h>
#include <string.h>

#define MAX_TAXON 25
#define MAX_STATUS 20
#define MAX_PROVINCE 3
#define TOTAL_PROVINCE 13
#define TOTAL_TAXON 10
#define PROVINCE_MAX_LENGTH 20

struct FileData
{
    int year;
    char taxon[MAX_TAXON];
    char status[MAX_STATUS];
    int count;
    char province[MAX_PROVINCE];
    
};

struct ProvinceSortList
{
    char* province;
    char* provinceName;
    int extinct;
    int extirpated;
    int endangered;
    int threatened;
    int concern;
    int total;
};

struct TaxonSortList
{
    char* taxon;
    int extinct;
    int extirpated;
    int endangered;
    int threatened;
    int concern;
    int total;
    
};
struct TaxonAndProvinceSortList
{
    char* province;
    char* taxon;
    int extinct;
    int extirpated;
    int endangered;
    int threatened;
    int concern;
    int total;
};




void exit(int status);


int loadData(char* dataFile, struct FileData* data, int max);

int importDataFile(FILE *fp, struct FileData* data, int max);

void mainLogic(struct FileData* data, int records);


void viewAllByYear(struct FileData* data, int records);

void viewAllByProvince(struct FileData* data, int records);

void viewAllByTaxon(struct FileData* data, int records);

void viewAllByProvinceAndTaxon(struct FileData* data, int records);


int mainMenu(void);

char* provinceSelection(void);
char* taxonSelection(void);


#endif /* cosewic_h */
