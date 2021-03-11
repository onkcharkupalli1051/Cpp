//new and delete operator

#include<iostream>
using namespace std;

int main()
{
    int *p = new int(5);
    cout<<*p;
    delete p;
    return 0;
}