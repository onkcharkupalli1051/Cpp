//Operator overloading for complex operations

#include<iostream>
using namespace std;

struct complex
{
    double re;
    double im;
};

complex operator+(complex &a, complex &b)
{
    complex r;
    r.re = a.re + b.re;
    r.im = a.im + b.im;
    return r;
}

int main()
{
    complex d1,d2,d;
    d1.re = 10.5; d1.im = 12.25;
    d2.re = 11.5; d2.im = 15.65;
    d = d1 + d2;
    cout<<"Real : "<<d.re<<endl;
    cout<<"Imaginary : "<<d.im;
    return 0;
}