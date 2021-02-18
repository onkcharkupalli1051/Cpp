#include<iostream>
using namespace std;

class MyClass
{
    mutable int x;
    public:
        MyClass(int _x) : x(_x) {}
        void set(int a)
        const
        {
            x = a;
        }
        void print() const{
            cout<<x<<endl;
        }
};

int main()
{
    const MyClass m(5);
    m.set(10);
    m.print();
    return 0;
}