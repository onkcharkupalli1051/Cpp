#include<iostream>
using namespace std;

class Complex{
    int re,im;
    public:
        Complex(int x, int y) : re(x), im(y) {}
        friend Complex& operator<<(ostream&, Complex&);
};

Complex& operator<<(ostream& os, Complex& c)
{
    cout<<c.re<<" + "<<c.im<<"i"<<endl;
    return c;
}

int main()
{
    Complex c(2,5);
    cout<<c;
    return 0;
}