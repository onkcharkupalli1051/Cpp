#include<iostream>
using namespace std;

int main()
{
    int i = 2;
    double d = 3.7;
    double *pd = &d;

    i = d;
    cout<<i;

    return 0;
}