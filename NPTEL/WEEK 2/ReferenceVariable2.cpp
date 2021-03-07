#include<iostream>
using namespace std;

void func(int &b, int c)
{
    cout<<"\nb : "<<b<<" "<<&b;
    cout<<"\nc : "<<c<<" "<<&c;
    b = 100;
    c = 200;
    cout<<"\nb : "<<b<<" "<<&b;
    cout<<"\nc : "<<c<<" "<<&c;
}

int main()
{
    int a = 10,x=20;
    cout<<"a : "<<a<<" "<<&a;
    func(a,x);
    cout<<"\na : "<<a<<" "<<&a;
    cout<<"\nx : "<<x<<" "<<&x;
    return 0;
}