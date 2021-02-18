#include<iostream>
using namespace std;

class MyClass
{
    int a;
    public:
    MyClass(int _a): a(_a){}
    void update(int x) const{a = x;}
    void print() const{cout<<a;}
};

int main()
{
    const MyClass m(10);
    m.update(5);
    m.print();
    return 0;
}