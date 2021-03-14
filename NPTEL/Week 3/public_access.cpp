#include<iostream>
#include<cmath>
using namespace std;

class Complex 
{
    public:
        double re,im;

        double norm()
        {
            return sqrt(re*re + im*im);
        }
};

void print(const Complex& t)
{
    cout<<endl<<t.re<<"+j"<<t.im;
}

int main()
{
    Complex c = {4.2,5.3};
    print(c);
    cout<<endl<<c.norm();
    return 0;
}