#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count,i,sum=0;
    printf("Enter array size : ");
    scanf("%d",&count);

    int *arr = (int*)malloc(sizeof(int)*count);

    for(i=0; i<count; i++)
    {
        printf("\nEnter %d element : ",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("\nSum : %d",sum);
    return 0;
}
