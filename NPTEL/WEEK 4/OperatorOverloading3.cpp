//Operator Overloading using Global Function and private members

#include<iostream>
using namespace std;

class complex
{
    double re,im;
    public:
        complex(double a=0.0, double b=0.0):re(a), im(b){}
        complex(){}
        void display();
        double real(){return re;}
        double img(){return im;}
        double set_real(double r){re = r;}
        double set_img(double i){im = i;}
};

void complex::display()
{
    cout<<re<<"+j"<<im<<endl;
}

complex operator+(complex &t1, complex &t2)
{
    complex sum;
    sum.set_real(t1.real() + t2.real());
    sum.set_img(t1.img() + t2.img());
    return sum;
}

int main{
    complex c1(4.5,25.25), c2(8.3,10.25),c3;
    cout<<"1st Complex No. :";
    c1.display();
    cout<<"2nd Complex No. :";
    c2.display();
    c3 = c1+c2;
    cout<<"Sum : ";
    c3.display();
    return 0;
}