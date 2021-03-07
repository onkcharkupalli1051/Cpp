#include<iostream>
using namespace std;

int& func(int &x)
{
    cout<<"\nx : "<<x<<" "<<&x;
    return (x);
}

int main()
{
    int a = 10;
    cout<<"a : "<<a<<" "<<&a;

    const int &b = func(a);
    cout<<"\nb : "<<b<<" "<<&b;
    return 0;
}