#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num;
    FILE * fptr;
    
    if ((fptr = fopen("vtcprogram.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr,"%d", &num);

    printf("Value of n = %d", num);
    fclose(fptr);

    return 0;
}