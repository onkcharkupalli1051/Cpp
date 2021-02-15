#include<iostream>
using namespace std;

int main()
{
    const int a = 1;
    int b = 2;
    const int *p = &a;  
    *p = b;     //error
    p = &b;
    *p = 4;     //error
    cout<<*p;
    return 0;
}
