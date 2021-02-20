#include<iostream>
using namespace std;

class B
{
    public:
        void f()
        {
            cout<<"B::f()";
        }
};

class D:public B
{
    public:
        void f()
        {
            cout<<"D::f()";
        }
};

main()
{
    D obj;
    obj.B::f();
    return 0;
}