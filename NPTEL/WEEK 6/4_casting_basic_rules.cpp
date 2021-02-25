#include<iostream>
using namespace std;

class A{public:int i;};

class B{public:double d;};

int main()
{
    A a;
    B b;

    a.i = 10;
    b.d = 20.20;
    
    A *p = &a;
    B *q = &b;

    cout<<p->i<<endl;
    cout<<q->d<<endl;

    p = (A*)&b; //Forced Okay
    q = (B*)&a; //Forced Okay
    
    cout<<p->i<<endl;   //prints garbage : 858993459
    cout<<q->d;         //prints garbage : 8.00855e-307

    return 0;
}