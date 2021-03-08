#include<iostream>
using namespace std;

int& Ref(int &x)
{
    return x;
}

int main()
{
    int a=10,b;
    b = Ref(a);
    cout<<"a : "<<a<<" b : "<<b;
    Ref(a) = 3;
    cout<<"\na : "<<a;
    return 0;
}