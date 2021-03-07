
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    int ch;

    fp = fopen("f2.txt","w");

    if(fp == NULL)
    {
        printf("\nCannot open this file.");
    }
    else
    {
        fputc("New Text",fp);
    }

    fclose(fp);

    fp = fopen("f2.txt","r");
    if(fp == NULL)
    {
        printf("Cannot open this file");
    }
    else
    {
        while((ch = fgetc(fp)) != EOF)
        {
            printf("%c",ch);
        }
    }
    fclose(fp);
}
