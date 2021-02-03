#include<stdio.h>
#include<conio.h>

int main()
{
    char arr[20] = "Programming In C++";
    int *p;
    p = (int*)arr;

    printf("%c",p[2]);
    return 0;
}