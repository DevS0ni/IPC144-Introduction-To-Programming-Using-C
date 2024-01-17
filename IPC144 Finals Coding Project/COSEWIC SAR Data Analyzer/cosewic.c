/*
 author : Soni Dev Alpeshbhai
 e-mail : dasoni4@myseneca.ca
 IPC144 - Final Coding
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "cosewic.h"

int loadData(char* dataFile, struct FileData* data, int max){
    
    int totalRecords = 0;
    //opening the file data.txt
    FILE *fp;
    fp = fopen("data.txt", "r");
    
    if(fp != NULL){
    totalRecords = importDataFile(fp, data , max);
    }
    else
    {
        printf("\nERROR: File does not exist!!!\n\n");
    }

    
  
    return totalRecords;
}


int importDataFile(FILE *fp, struct FileData* data, int max ){
    
    int temp = -1;
    
    if(fp != NULL){
        while(temp < max){
            if(temp == -1){
                fscanf(fp, "%*s");
            }
            else{
            fscanf(fp,"%d,%20[^,;], %20[^,;], %d, %3[^\n]\n",&data[temp].year,data[temp].taxon, data[temp].status,&data[temp].count, data[temp].province);
            }
            temp++;
        }
    }
    
    return temp;
}

void mainLogic(struct FileData* data, int records){
    int userInput = -1;
    while(data != NULL){
    userInput = mainMenu();
        if(userInput >= 0 && userInput < 5){
        switch (userInput) {
            case 1:
                viewAllByYear(data, records);
                break;
            case 2:
                viewAllByProvince(data, records);
                break;
            case 3:
                viewAllByTaxon(data, records);
                break;
            case 4:
                viewAllByProvinceAndTaxon(data, records);
                break;
                
            case 0:
                printf("Application Terminated!\n");
                exit(0);
            default:
                break;
        }
        }
        else{
            printf("Invalid menu selection!\n\n");
        }
    }
}

int mainMenu(){
    int userInput = 0;
    printf("=======================================================\n");
    printf("         Canada Species at Risk Analysis\n");
    printf("         \t(Data Years: 2010 - 2019)\n");
    printf("=======================================================\n");
    printf("1. View by year (sorted ASCENDING by year)\n");
    printf("2. View by province (sorted DESCENDING by totals)\n");
    printf("3. View by taxon (sorted ASCENDING by totals)\n");
    printf("4. View by province and taxon\n");
    printf("-------------------------------------------------------\n");
    printf("0. Exit\n");
    printf("-------------------------------------------------------\n");
    printf("Selection: ");
    scanf("%d", &userInput);
    printf("\n");
    return userInput;
}


//_______________View Output Methods_________


void viewAllByYear(struct FileData* data, int records){
    printf("YEAR EXTINCT EXTIRPATED ENDANGERED THREATENED CONCERN     TOTAL\n");
    printf("---- ------- ---------- ---------- ---------- ------- ---------\n");
    int extinct = 0;
    int extirpated = 0;
    int endangered = 0;
    int threatened = 0;
    int concern = 0;
    int totalExtinct = 0;
    int totalExtirpated = 0;
    int totalEndangered = 0;
    int totalThreatened = 0;
    int totalConcern = 0;
    int total = 0;
    int grandTotal = 0;
    int j;
    int i;
    for(j = 2010; j < 2020; j++){
        for(i = 0; i < records ; i++){
        if(data[i].year == j){
            if(!strcmp("EXTINCT", data[i].status)){
                extinct += data[i].count;
            }
            else if(!strcmp("EXTIRPATED", data[i].status)){
                extirpated += data[i].count;
            }
            else if(!strcmp(data[i].status, "THREATENED")){
                threatened += data[i].count;
            }
            else if(!strcmp(data[i].status, "ENDANGERED")){
                endangered += data[i].count;
            }
            else if(!strcmp(data[i].status, "SPECIAL CONCERN")){
                concern += data[i].count;
            }
           
        }
    }
        totalExtinct += extinct;
        totalExtirpated += extirpated;
        totalEndangered += endangered;
        totalThreatened += threatened;
        totalConcern += concern;
        total =extinct + extirpated + endangered + threatened + concern;
        
        //Show the output
        printf("%d    %d       %d       %d       %d    %d     %d\n", j, extinct, extirpated, endangered, threatened, concern, total);
        extinct = 0;
        extirpated = 0;
        endangered = 0;
        threatened = 0;
        concern = 0;
        total = 0;
    }
    
    grandTotal = totalExtinct + totalExtirpated + totalEndangered + totalThreatened + totalConcern;
    //Outputs of totals and grand totals
    printf("     ------- ---------- ---------- ---------- ------- ---------\n");
    printf("       %d      %d      %d      %d   %d    %d\n\n",totalExtinct, totalExtirpated, totalEndangered, totalThreatened, totalConcern, grandTotal);
}


//sorted descending by the totals

void viewAllByProvince(struct FileData* data, int records){
    printf("PROVINCE             EXTINCT EXTIRPATED ENDANGERED THREATENED CONCERN     TOTAL\n");
    printf("-------------------- ------- ---------- ---------- ---------- ------- ---------\n");
    
    //Defining Province Sort List -
    struct ProvinceSortList provinceData[TOTAL_PROVINCE] = {{0}};
    provinceData[0].province = "AB";
    provinceData[1].province = "BC";
    provinceData[2].province = "MB";
    provinceData[3].province = "NB";
    provinceData[4].province = "NL";
    provinceData[5].province = "NS";
    provinceData[6].province = "NT";
    provinceData[7].province = "NU";
    provinceData[8].province = "ON";
    provinceData[9].province = "PE";
    provinceData[10].province = "QC";
    provinceData[11].province = "SK";
    provinceData[12].province = "YT";
    provinceData[0].provinceName = "Alberta";
    provinceData[1].provinceName = "British Columbia";
    provinceData[2].provinceName = "Manitoba";
    provinceData[3].provinceName = "New Brunswick";
    provinceData[4].provinceName = "NewFoundland";
    provinceData[5].provinceName = "Nova Scotia";
    provinceData[6].provinceName = "Northwest Territory";
    provinceData[7].provinceName = "Nunavut";
    provinceData[8].provinceName = "Ontario";
    provinceData[9].provinceName = "Prince Edward Island";
    provinceData[10].provinceName = "Quebec";
    provinceData[11].provinceName = "Saskatchewan";
    provinceData[12].provinceName = "Yukon Territory";
    int grandTotal = 0;
    int extinctTotal = 0;
    int extirpatedTotal = 0;
    int threatenedTotal = 0;
    int endangeredTotal = 0;
    int concernTotal = 0;
    int i;
    int j;
    for(i = 0; i < TOTAL_PROVINCE; i++){
        for(j = 0; j < records; j++ ){
            if(!strcmp(data[j].province, provinceData[i].province)){
                if(!strcmp("EXTINCT", data[j].status)){
                    provinceData[i].extinct += data[j].count;
                }
                else if(!strcmp("EXTIRPATED", data[j].status)){
                    provinceData[i].extirpated += data[j].count;
                }
                else if(!strcmp(data[j].status, "THREATENED")){
                    provinceData[i].threatened += data[j].count;
                }
                else if(!strcmp(data[j].status, "ENDANGERED")){
                    provinceData[i].endangered += data[j].count;
                }
                else if(!strcmp(data[j].status, "SPECIAL CONCERN")){
                    provinceData[i].concern += data[j].count;
                }
    
            }
        }
      //Outer Loop
        provinceData[i].total = provinceData[i].extinct + provinceData[i].extirpated + provinceData[i].threatened + provinceData[i].concern + provinceData[i].endangered;
        extinctTotal += provinceData[i].extinct;
        extirpatedTotal += provinceData[i].extirpated;
        threatenedTotal += provinceData[i].threatened;
        endangeredTotal += provinceData[i].endangered;
        concernTotal += provinceData[i].concern;
        grandTotal += provinceData[i].total;
    }
        struct ProvinceSortList temp[TOTAL_PROVINCE];
        for(i = 0;i < TOTAL_PROVINCE; i++){
            for(j = i+1; j < TOTAL_PROVINCE; j++){
                if(provinceData[j].total > provinceData[i].total){
                    temp[j] = provinceData[j];
                    provinceData[j] = provinceData[i];
                    provinceData[i] = temp[j];
                }
            }
        }
        for(i = 0; i < TOTAL_PROVINCE; i++){
            
            if((!strcmp(provinceData[i].province, "ON")) || (!strcmp(provinceData[i].province, "NU")) || (!strcmp(provinceData[i].province, "AB"))){
            printf("%s%21d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            else if((!strcmp(provinceData[i].province, "QC"))){
            printf("%s%22d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            else if((!strcmp(provinceData[i].province,"MB"))){
                printf("%s%20d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            else if((!strcmp(provinceData[i].province,"NS"))){
                printf("%s%17d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            else if(!strcmp(provinceData[i].province,"BC")){
                printf("%s%12d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            else if(!strcmp(provinceData[i].province,"PE")){
                printf("%s%8d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            else if(!strcmp(provinceData[i].province,"NT")){
                printf("%s%9d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            else if(!strcmp(provinceData[i].province,"NB")) {
                printf("%s%15d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            else if(!strcmp(provinceData[i].province, "YT")){
                printf("%s%13d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }
            
            else{
                printf("%s%16d%11d%11d%11d%8d%10d\n",provinceData[i].provinceName, provinceData[i].extinct, provinceData[i].extirpated, provinceData[i].endangered, provinceData[i].threatened, provinceData[i].concern, provinceData[i].total);
            }

        }
        printf("-------------------- ------- ---------- ---------- ---------- ------- ---------\n");
        printf("%28d%11d%11d%11d%8d%10d\n\n", extinctTotal, extirpatedTotal, endangeredTotal, threatenedTotal, concernTotal, grandTotal );

}

void viewAllByTaxon(struct FileData* data, int records){
    
        printf("View by taxon selected\n");
    printf("TAXON           EXTINCT EXTIRPATED ENDANGERED THREATENED CONCERN     TOTAL\n");
    printf("--------------- ------- ---------- ---------- ---------- ------- ---------\n");
    
    //Defining Province Sort List -
    struct TaxonSortList taxonData[TOTAL_TAXON] = {{0}};
    taxonData[0].taxon = "Molluscs";
    taxonData[1].taxon = "Lichens";
    taxonData[2].taxon = "Amphibians";
    taxonData[3].taxon = "Vascular Plants";
    taxonData[4].taxon = "Reptiles";
    taxonData[5].taxon = "Mammals";
    taxonData[6].taxon = "Arthropods";
    taxonData[7].taxon = "Mosses";
    taxonData[8].taxon = "Birds";
    taxonData[9].taxon = "Fishes";

    int grandTotal = 0;
    int extinctTotal = 0;
    int extirpatedTotal = 0;
    int threatenedTotal = 0;
    int endangeredTotal = 0;
    int concernTotal = 0;
    int i, j;
    for(i = 0; i < TOTAL_TAXON; i++){
        for(j = 0; j < records; j++ ){
            if(!strcmp(data[j].taxon, taxonData[i].taxon)){
                if(!strcmp("EXTINCT", data[j].status)){
                    taxonData[i].extinct += data[j].count;
                }
                else if(!strcmp("EXTIRPATED", data[j].status)){
                    taxonData[i].extirpated += data[j].count;
                }
                else if(!strcmp(data[j].status, "THREATENED")){
                    taxonData[i].threatened += data[j].count;
                }
                else if(!strcmp(data[j].status, "ENDANGERED")){
                    taxonData[i].endangered += data[j].count;
                }
                else if(!strcmp(data[j].status, "SPECIAL CONCERN")){
                    taxonData[i].concern += data[j].count;
                }
    
            }
        }
      //Outer Loop
        taxonData[i].total = taxonData[i].extinct + taxonData[i].extirpated + taxonData[i].threatened + taxonData[i].concern + taxonData[i].endangered;
        extinctTotal += taxonData[i].extinct;
        extirpatedTotal += taxonData[i].extirpated;
        threatenedTotal += taxonData[i].threatened;
        endangeredTotal += taxonData[i].endangered;
        concernTotal += taxonData[i].concern;
        grandTotal += taxonData[i].total;
    }
    
    struct TaxonSortList temp[TOTAL_TAXON];
    for(i = 0;i < TOTAL_TAXON; i++){
        for(j = i+1; j < TOTAL_TAXON; j++){
            if(taxonData[j].total < taxonData[i].total){
                temp[j] = taxonData[j];
                taxonData[j] = taxonData[i];
                taxonData[i] = temp[j];
            }
        }
    }
    for(i = 0; i < TOTAL_TAXON; i++){
        if(!strcmp(taxonData[i].taxon, "Lichens") || !strcmp(taxonData[i].taxon, "Mammals")){
            printf("%s%16d%11d%11d%11d%8d%10d\n",taxonData[i].taxon, taxonData[i].extinct, taxonData[i].extirpated, taxonData[i].endangered, taxonData[i].threatened, taxonData[i].concern, taxonData[i].total);
            }
        else if(!strcmp(taxonData[i].taxon, "Vascular Plants")){
            printf("%s%8d%11d%11d%11d%8d%10d\n",taxonData[i].taxon, taxonData[i].extinct, taxonData[i].extirpated, taxonData[i].endangered, taxonData[i].threatened, taxonData[i].concern, taxonData[i].total);
            }
        else if(!strcmp(taxonData[i].taxon, "Mosses") || !strcmp(taxonData[i].taxon, "Fishes")){
            printf("%s%17d%11d%11d%11d%8d%10d\n",taxonData[i].taxon, taxonData[i].extinct, taxonData[i].extirpated, taxonData[i].endangered, taxonData[i].threatened, taxonData[i].concern, taxonData[i].total);
            }
        else if(!strcmp(taxonData[i].taxon, "Birds")){
            printf("%s%18d%11d%11d%11d%8d%10d\n",taxonData[i].taxon, taxonData[i].extinct, taxonData[i].extirpated, taxonData[i].endangered, taxonData[i].threatened, taxonData[i].concern, taxonData[i].total);
            }
        else if(!strcmp(taxonData[i].taxon, "Arthropods") || !strcmp(taxonData[i].taxon, "Amphibians")){
            printf("%s%13d%11d%11d%11d%8d%10d\n",taxonData[i].taxon, taxonData[i].extinct, taxonData[i].extirpated, taxonData[i].endangered, taxonData[i].threatened, taxonData[i].concern, taxonData[i].total);
            }
        
        else{
        printf("%s%15d%11d%11d%11d%8d%10d\n",taxonData[i].taxon, taxonData[i].extinct, taxonData[i].extirpated, taxonData[i].endangered, taxonData[i].threatened, taxonData[i].concern, taxonData[i].total);
        }
    }
    
    printf("--------------- ------- ---------- ---------- ---------- ------- ---------\n");
    printf("%23d%11d%11d%11d%8d%10d\n\n", extinctTotal, extirpatedTotal, endangeredTotal,threatenedTotal, concernTotal, grandTotal );
}


void viewAllByProvinceAndTaxon(struct FileData* data, int records){
    char* province;
    province = provinceSelection();
    char* taxon;
    taxon = taxonSelection();
    
    struct ProvinceSortList provinceData[TOTAL_PROVINCE] = {{0}};
    provinceData[0].province = "AB";
    provinceData[1].province = "BC";
    provinceData[2].province = "MB";
    provinceData[3].province = "NB";
    provinceData[4].province = "NL";
    provinceData[5].province = "NS";
    provinceData[6].province = "NT";
    provinceData[7].province = "NU";
    provinceData[8].province = "ON";
    provinceData[9].province = "PE";
    provinceData[10].province = "QC";
    provinceData[11].province = "SK";
    provinceData[12].province = "YT";
    provinceData[0].provinceName = "Alberta";
    provinceData[1].provinceName = "British Columbia";
    provinceData[2].provinceName = "Manitoba";
    provinceData[3].provinceName = "New Brunswick";
    provinceData[4].provinceName = "NewFoundland";
    provinceData[5].provinceName = "Nova Scotia";
    provinceData[6].provinceName = "Northwest Territory";
    provinceData[7].provinceName = "Nunavut";
    provinceData[8].provinceName = "Ontario";
    provinceData[9].provinceName = "Prince Edward Island";
    provinceData[10].provinceName = "Quebec";
    provinceData[11].provinceName = "Saskatchewan";
    provinceData[12].provinceName = "Yukon Territory";
    char* provinceName = NULL;
    int i;
    for(i = 0; i < TOTAL_PROVINCE; i++){
        if(!strcmp(province, provinceData[i].province)){
            provinceName = provinceData[i].provinceName;
        break;
    }
    }
    
    printf("*** Data filtered by PROVINCE and TAXON ***\n\n");
    printf("    Province:  %s\n", provinceName);
    printf("    Taxon   :  %s\n\n",taxon);

    printf("EXTINCT EXTIRPATED ENDANGERED THREATENED CONCERN     TOTAL\n");
    printf("------- ---------- ---------- ---------- ------- ---------\n");
    
    
    int extinct = 0;
    int extirpated = 0;
    int endangered = 0;
    int threatened = 0;
    int concern = 0;
    int total = 0;
   for(i = 0 ; i < records ; i++){
        if(!strcmp(data[i].province, province) && !strcmp(data[i].taxon, taxon)){
            if(!strcmp("EXTINCT", data[i].status)){
                extinct += data[i].count;
            }
            else if(!strcmp("EXTIRPATED", data[i].status)){
                extirpated += data[i].count;
            }
            else if(!strcmp(data[i].status, "THREATENED")){
                threatened += data[i].count;
            }
            else if(!strcmp(data[i].status, "ENDANGERED")){
                endangered += data[i].count;
            }
            else if(!strcmp(data[i].status, "SPECIAL CONCERN")){
                concern += data[i].count;
            }
           
        
    }
   }
       
        total =extinct + extirpated + endangered + threatened + concern;

        //Show the output
        printf("    %d        %d        %d        %d     %d      %d\n\n", extinct, extirpated, endangered, threatened, concern, total);
       
    }

char* provinceSelection(){
    int provinceSelection = -1;
    while (provinceSelection < 1 || provinceSelection > 13) {
    printf(" Choose a Province\n");
    printf("----------------------------------\n");
    printf(" 1) AB (Alberta)\n");
    printf(" 2) BC (British Columbia)\n");
    printf(" 3) MB (Manitoba)\n");
    printf(" 4) NB (New Brunswick)\n");
    printf(" 5) NL (Newfoundland)\n");
    printf(" 6) NS (Nova Scotia)\n");
    printf(" 7) NT (Northwest Territories)\n");
    printf(" 8) NU (Nunavut)\n");
    printf(" 9) ON (Ontario)\n");
    printf("10) PE (Prince Edward Island)\n");
    printf("11) QC (Quebec)\n");
    printf("12) SK (Saskatchewan)\n");
    printf("13) YT (Yukon Territory)\n");
    printf("Selection: ");
    scanf("%d",&provinceSelection);
    printf("\n");
        if(provinceSelection < 1 || provinceSelection > 13){
            printf("Invalid menu selection!\n\n");
            continue;
        }
    
        
    }
    switch (provinceSelection) {
        case 1:
            return "AB";
            break;
        case 2:
            return "BC";
            break;
        case 3:
            return "MB";
            break;
        case 4:
            return "NB";
            break;
        case 5:
            return "NL";
            break;
        case 6:
            return "NS";
            break;
        case 7:
            return "NT";
            break;
        case 8:
            return "NU";
            break;
        case 9:
            return "ON";
            break;
        case 10:
            return "PE";
            break;
        case 11:
            return "QC";
            break;
        case 12:
            return "SK";
            break;
        case 13:
            return "YT";
            break;
        default:
            printf("Invalid Input\n");
            exit(0);
            break;
    
    }
}

char* taxonSelection(){
    int taxonSelection = -1;
    while(taxonSelection < 1 || taxonSelection > 10){
    printf("Choose a Taxon\n");
    printf("---------------\n");
    printf(" 1) Mammals\n");
    printf(" 2) Birds\n");
    printf(" 3) Reptiles\n");
    printf(" 4) Amphibians\n");
    printf(" 5) Fishes\n");
    printf(" 6) Arthropods\n");
    printf(" 7) Molluscs\n");
    printf(" 8) Vascular Plants\n");
    printf(" 9) Mosses\n");
    printf("10) Lichens\n");
    printf("Selection: ");
    scanf("%d",&taxonSelection);
    printf("\n");
        if(taxonSelection < 1 || taxonSelection > 10){
            printf("Invalid menu selection!\n\n");
            continue;
        }
    }
    
    switch (taxonSelection) {
        case 1:
            return "Mammals";
            break;
        case 2:
            return "Birds";
            break;
        case 3:
            return "Reptiles";
            break;
        case 4:
            return "Amphibians";
            break;
        case 5:
            return "Fishes";
            break;
        case 6:
            return "Arthropods";
            break;
        case 7:
            return "Molluscs";
            break;
        case 8:
            return "Vascular Plants";
            break;
        case 9:
            return "Mosses";
            break;
        case 10:
            return "Lichens";
            break;
        default:
            printf("Invalid Input\n");
            exit(0);
            break;
    }
}
