#include<iostream>
using namespace std;

class A
{
    public:
        virtual void f() = 0;
};

class B : public A
{
    double data1;
    public:
        void f()
        {
            cout<<"B::f()";
        }
};

class C : public B
{
    double data2;
    public:
        void f()
        {
            cout<<"C::f()";
        }
};

int main()
{
    cout<<sizeof(void*)<<endl<<sizeof(double)<<endl;
    cout<<sizeof(A)<<endl<<sizeof(B)<<endl<<sizeof(C);
    return 0;
}
