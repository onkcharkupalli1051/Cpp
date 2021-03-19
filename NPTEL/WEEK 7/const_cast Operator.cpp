#include<iostream>
#include<stdio.h>
using namespace std;

class A
{
    int i;
    public:
        A(int i_): i(i_) {}
        int get() const {return i;}
        void set(int j) {i = j;}
};

int main()
{
    const char *c = "sample text";

    //print(c); Error
    //print(const_cast<char*>(c)); runs

    const A a(1);
    a.get();

    const_cast<A&>(a).set(5);

    return 0;
}
