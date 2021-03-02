#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    if(*(int*)a < *(int*)b) return -1;
    if(*(int*)a == *(int*)b) return 0;
    if(*(int*)a > *(int*)b) return 1;
}

int main()
{
    int data[] = {11,55,66,77,88};
    int key = 7;

    if(bsearch(&key, data, 5, sizeof(int),compare))
        printf("Found!");
    else
        printf("Not Found!");
    return 0;
}