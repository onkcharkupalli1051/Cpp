#include<iostream>
using namespace std;

class Complex
{
    double re,im;

    public:
        explicit Complex(double re_ = 0, double im_ = 0):
        re(re_),im(im_) {}

        void display()
        {
            cout<<re<<" +i "<<im<<endl;
        }

        friend Complex operator+(const Complex& a, const Complex& b)
        {
            Complex x;
            x.re = a.re + b.re;
            x.im = a.im + b.im;
            return x;
        }

        friend Complex operator+(const Complex& a,double d)
        {
            Complex b(d);
            return a + b;
        }

        friend Complex operator+(double d, const Complex& b)
        {
            Complex a(d);
            return a+b;
        }
};

int main()
{
    Complex d1(2.5,3.2), d2(1.6,3.3), d3;

    d3 = d1 + d2;
    d3.display();

    d3 = d1 + 6.2;
    d3.display();

    d3 = 4.2 + d2;
    d3.display();

    return 0;
}