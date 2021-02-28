#include<iostream>
using namespace std;

class A
{
    public:
        virtual void f(){cout<<"A::f() ";}
        virtual void g() = 0;
        void h(){cout<<"A::h()";}
};

class B : public A
{
    public:
        void f(){cout<<"B::f() ";}
        virtual void g(){cout<<"B::g() ";}
        void h(){cout<<"B::h() ";}
};

int main()
{
    B ob;
    A* pa = &ob;
    A& ra = ob;

    pa->f();
    pa->g();
    pa->h();

    ra.f();
    ra.g();
    ra.h();
    return 0;
}