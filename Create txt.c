#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char str[80] = "Bohemian Rhapsody.";
    char *p;

    /* Open File */

    if((fp = fopen("Z:\\queen.txt", "w")) == NULL) 
    {
        fprintf(stderr, "Error opening file. \n");
        exit(1);
    }

    /* Write File */

    p = str;

    while(*p)
    {
        if(fputc(*p,fp) == EOF)
        {
            fprintf(stderr, "Error writing file. \n");
            exit(1);
        }
        p++;
    }

    if(fclose(fp) == EOF)
    {
        fprintf(stderr, "Error closing file. \n");
    }

    return 0;
}
