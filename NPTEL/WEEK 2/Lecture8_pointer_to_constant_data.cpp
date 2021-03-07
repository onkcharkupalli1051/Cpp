//pointer to constant data

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int m = 4;
    const int n = 6;
    const int *p = &n;

    // n=6;     error
    // *p = 7;      error
    p = &m;     //okay
    *p = 8;
    
    cout<<m<<endl<<*p;
}