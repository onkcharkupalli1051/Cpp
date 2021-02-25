#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    double d = 20.20;
    double *p = &d;

    // i = d;
    // cout<<i;
    
    // d = i;
    // cout<<d;
    
    /*
    Invalid conversion from int to double for both double and int
    p = i;
    cout<<*p;
    */

    return 0;
}