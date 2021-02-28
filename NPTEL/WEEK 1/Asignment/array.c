#include<stdio.h>

struct real
{
    double re,im;
}r1;

int main()
{
    int arr[3] = {1,2,3};
    int *p = arr;
    int size = sizeof(arr)/sizeof(int);
    printf("%d\n",size);
    for(int i=0; i<size;i++)
    {
        printf("%d ",*p);
        *++p;
    }

    struct real r1 = {20.20,30.30};
    struct real *pr = &r1;
    printf("\n%lf %lf \n%lf %lf",(*p).re,(*p).im,p->re,p->im);
    return 0;
}