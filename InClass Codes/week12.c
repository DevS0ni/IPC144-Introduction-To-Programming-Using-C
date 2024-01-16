// Writing to a File
// writeToFile.c

#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
     char arr[31];

    fp = fopen("alpha.txt","r");

    if (fp != NULL)
    {
        while(fscanf(fp, "%s", arr)!=EOF){  
            printf("%s ", arr);  
        }  
    }
    else
    {
        printf("Failed to open file\n");
    }
    return 0;
}