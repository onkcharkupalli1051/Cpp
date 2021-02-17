#include<iostream>
using namespace std;

class A
{
    public:
        int a,b;
        void get()
        {
            a = 100;
            b = 200;
        }
        A dis()
        {
            return a1;
        }
};

int main()
{
    A a1,a2;
    a1.get();
    a2 = a1.dis();
    cout<<"Value of A : "<<a1.dis();
    return 0;
}