#include<iostream>
using namespace std;

class A{
    static int a;
    public:
    int get(){
        return a;
    }
    friend class B;
};

int A::a = 0;

class B{
    int b;
    public:
    B(int y):b(y) {}
    void print(){
        A::a = 5;
        cout<<b<<" "<<A::a;
    }
};

int main()
{
    B t2(5);
    t2.print();
    return 0;
}