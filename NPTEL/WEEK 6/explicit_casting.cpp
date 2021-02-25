#include<iostream>
using namespace std;

int main()
{
    double d = 20.20;
    double *p = &d;
    int i = 10;

    //explicit casting
    
    //i = (int)d;

    /* 
    error invalid conversion from double* to int
    i = p;
    */
    i = (int)p;
    cout<<*p<<endl;
    cout<<i;
    
    return 0;
}