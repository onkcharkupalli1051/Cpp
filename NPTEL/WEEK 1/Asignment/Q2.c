#include<stdio.h>
#include<malloc.h>

int main()
{
    int *p= (int*)malloc(sizeof(int));
    *p = 0x5E6A3D1B;
    unsigned char *q = (unsigned char*)p;
    printf("%X\n",*(q+1));
    return 0;
}