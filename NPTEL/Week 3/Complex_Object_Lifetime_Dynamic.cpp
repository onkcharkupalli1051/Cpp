#include<iostream>
using namespace std;

class Complex
{
    double re,im;

    public:
        Complex(double re_ = 0.0, double im_= 0.0): re(re_), im(im_) {}
        ~Complex() {}
        double norm() {return sqrt(re*re + im*(im));}
        void print() {cout<<re<<"+j"<<im;}
};

int main()
{
    unsigned char buf[100];
    Complex *pc = new Complex(4.2,5.3);
    Complex *pd = new Complex[2];

    Complex *pe = new (buf) Complex(2.6,3.9);

    pc->print();
    pd[0].print();
    pd[1].print();
    pe->print();

    delete pc;
    delete [] pd;
    pe->~Complex();
    return 0;
}