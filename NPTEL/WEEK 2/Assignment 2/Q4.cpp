#include<iostream>
using namespace std;

int main()
{
    int a = 10;     
    int &b = a;
    a = a*b;
    cout<<a<<" "<<b;
    return 0;
}