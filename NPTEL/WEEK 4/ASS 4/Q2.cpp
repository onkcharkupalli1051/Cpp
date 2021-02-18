#include<iostream>
using namespace std;

class MyClass
{
    static int x;
    public:
        MyClass(int _x) : x(_x) {}
        void print() const{
            cout<<x<<endl;
        }
};

int main()
{
    MyClass m(10);
    m.print();
    return 0;
}