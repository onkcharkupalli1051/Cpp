#include<iostream>
using namespace std;

class A
{
    public:
        virtual void f(){cout<<"A::f() ";};
};

class B : public A
{
    public:
        void f()
        {
            cout<<"B::f() ";
        }
};

class C : public B
{
    public:
        void f()
        {
            cout<<"C::f()";
        }
};

int main()
{
    C *cb = new C;
    A::f();
    return 0;
}