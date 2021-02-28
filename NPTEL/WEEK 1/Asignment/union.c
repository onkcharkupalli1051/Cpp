#include<stdio.h>

typedef union packet
{
    int idata;
    double ddata;
    char cdata;
}p;

int main()
{
    union packet p = {20};
    p.ddata = 99.36;
    p.cdata = 'a';
    p.idata = 10;
    printf("idata : %d\n",p.idata);
    printf("ddata : %lf\n",p.ddata);
    printf("cdata : %c",p.cdata);
    printf("\nSize : %d", sizeof(p));
    return 0;
}