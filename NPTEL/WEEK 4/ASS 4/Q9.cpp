#include<iostream>
using namespace std;

class MyClass{
    static int x;
    int y;
    public:
        MyClass(int a):y(a){}
};

int MyClass::x = 0;

int main()
{
    MyClass m(1);
    cout<<sizeof(m);
    return 0;
}