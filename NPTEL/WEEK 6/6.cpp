//upcasting is safe
#include<iostream>
using namespace std;

class A{public: int dataA;};

class B: public A{public : int dataB;};

int main()
{
    A a;
    B b;

    a.dataA = 2;
    b.dataA = 3;
    b.dataB = 5;

    A *pa = &a;
    B *pb = &b;

    cout<<pa->dataA<<endl;
    cout<<pb->dataA<<" "<<pb->dataB<<endl;

    pa = &b;
    cout<<pa->dataA<<endl;
    //cout<<pa->dataB<<endl;      //error
    return 0;
}