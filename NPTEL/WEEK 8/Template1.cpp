#include<iostream>
using namespace std;

template<class T>
T Max(T x, T y)
{
    return x>y ? x : y;
}

int main()
{
    int a = 3, b = 5, iMax;
    double c = 2.1, d = 3.7, dMax;

    iMax = Max<int>(a,b);
    dMax = Max<double>(c,d);

    cout<<"iMax : "<<iMax<<" dMax : "<<dMax;
    return 0;
}