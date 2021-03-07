#include<iostream>
using namespace std;

void func(int &b, int c)
{
    cout<<"\nb : "<<b<<" "<<&b;
    cout<<"\nc : "<<c<<" "<<&c;
}

int main()
{
    int a = 10;
    cout<<"a : "<<a<<" "<<&a;
    func(a,a);
    return 0;
}