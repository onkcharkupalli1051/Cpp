#include<iostream>
#include<stdlib.h>
using namespace std;

void* operator new(size_t n)
{
    cout<<"Overloaded new"<<endl;
    void *ptr;
    ptr = malloc(n);
    return ptr;
}

int main()
{
    int *p = new int;
    *p = 30;
    cout<<"\n*p : "<<*p;
    delete p;
    return 0;
}