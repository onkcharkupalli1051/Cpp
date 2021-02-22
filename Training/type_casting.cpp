#include<iostream>
using namespace std;

class A
{
    int a;
    public: 
    int give()
    {
        return a;
    }
};

class B
{
    public:
        int b;
        B(A a2)
        {
            b = a2.give();
        }
};

int main()
{
    int x=10,y;
    A a1(500);
    B b1;
    b1 = a1;
    
    return 0;
}