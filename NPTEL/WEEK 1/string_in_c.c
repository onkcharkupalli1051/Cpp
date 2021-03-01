#include<stdio.h>
#include<string.h>

int main()
{
    char s1[2] = {'H','i'};
    char s2[4] = "Wsup";

    char s3[20];
    strcpy(s3,s1);
    strcat(s3,s2);
    printf("%s",s3);
    return 0;
}