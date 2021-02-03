#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int *arr[5] = {a,a+1,a+2,a+3,a+4};
    int *p = a+4;
    cout<<p[*arr[1]-5]<<endl;
    for(int i=0;i<5;i++)
        cout<<*p<<" "<<p<<" ";
    return 0;
}
