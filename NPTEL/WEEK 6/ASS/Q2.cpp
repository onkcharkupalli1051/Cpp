#include<iostream>
using namespace std;

class base
{
    public:
        void fun()
        {
            cout<<"base::fun()"<<endl;
        }
};

class derived: public base
{
    public:
        void fun(int i){}
        void fun(double d)
        {
            cout<<"derived::fun(double)"<<endl;
        }
};

int main()
{
    derived d;
    d.fun();
    d.fun(3.14);
    return 0;
}