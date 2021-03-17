#include<iostream>
using namespace std;

class Complex
{
    double re,im;

    public:
        Complex(double re_=0.0,double im_=0.0):
        re(re_),im(im_) {}
        ~Complex() {}
        void display()
        {
            cout<<re<<"+j"<<im<<endl;
        }
        Complex operator+(const Complex& c)
        {
            Complex r;
            r.re = re + c.re;
            r.im = im + c.im;
            return r;
        }
};

int main()
{
    Complex c1(4.5,25.25), c2(8.3,10.25),c3;
    cout<<"1st Complex : ";
    c1.display();
    cout<<"2 Complex : ";
    c2.display();    
    c3 = c1 + c2;
    cout<<"3 Complex : ";
    c3.display();
    return 0;
}