#include<iostream>
using namespace std;

int &fun(int &x)
{
    x += 10;
    return x;
}

int main()
{
    int a = 10, b=1;
    fun(b) = a;
    cout<<a<<" "<<b;    // 10  10
    return 0;
}