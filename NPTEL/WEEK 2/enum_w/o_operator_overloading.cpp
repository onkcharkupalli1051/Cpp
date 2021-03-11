//enum_w/o_operator_overloading.cpp

#include<iostream>
using namespace std;

enum E
{
    C0 = 0,
    C1 = 1,
    C2 = 2
};

int main()
{
    E a = C1, b = C2;
    int c;

    c = a + b;
    cout<<c;

    return 0;
}