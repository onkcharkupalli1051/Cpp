#include<iostream>
using namespace std;

class complex
{
    double re,im;
    public:
        complex(double a=0.0, double b=0.0):re(a), im(b) {}
        ~complex(){}
        void display();
        complex operator+(const complex &c)
        {
            complex r;
            r.re = re + c.re;
            re.im = im + c.im;
            return r;
        }
};

void complex::display()
{
    cout<<re;
    cout<<" +j "<<im<<endl;
}

int main()
{
    complex c1(4.65,253.25), c2(8.65,5.2),c3;
    cout<<"1st complex no : ";
    c1.display();

    cout<<endl<<"2nd complex no. : "<<c2.display();
    c3 = c1 + c2;
    cout<<"\nSum : "<<c3.display();
    return 0;
}