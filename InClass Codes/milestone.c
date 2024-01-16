#include <stdio.h>
#define NAME_SIZE 30

struct Product{
    int sku;
    double price;
    char name[NAME_SIZE+1];
};


int main(void)
{
    struct Product prod[2] = { 0 };
    int i = 0;
    char ch;

    FILE *fp = NULL;
    int sku = 4664;
    double price = 1.49;

    fp = fopen("alpha.txt","r");

    if (fp != NULL)
    {
        while(i<2 && fscanf(fp, "%d|%lf|%30[^\n]%c", &prod[i].sku, &prod[i].price, prod[i].name, &ch) ==4)
        {
            if(ch != '\n'){
                while(fgetc(fp) !='\n')     ;
            }
            i++;
        }
        fclose(fp);
        fp = NULL;
    }
    else
    {
        printf("Failed to open file\n");
    }
    for(int i = 0;i<2;i++){
        printf("%d|%lf|%s\n", prod[i].sku,prod[i].price,prod[i].name);
    }
    return 0;
}