#include<iostream>
using namespace std;

void A()
{
    cout<<"A";
}

void B()
{
    cout<<"B";
}

void C()
{
    cout<<"C";
}

int main()
{
    void (*p[3])();
    p[0] = A;
    p[1] = B;
    p[2] = C;
    p[2]();    //...and C() will print C
    return 0;
}