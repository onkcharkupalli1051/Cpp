#include<iostream>
using namespace std;

class A{int i;};

class B{double d;};

int main()
{
    A a;
    B b;

    A *p = &a;
    B *q = &b;

    /*
    1. error: binary '=' : no operator found

        a = b;
        b = a;

    2. error : 'type cast' : cannot convert 

        a = (A)b;
        b = (B)a;

    3. error : '=' : cannot convert 

        p = q;
        q = p;

    */

    p = (A*)&b; //Forced Okay
    q = (B*)&a; //Forced Okay
    return 0;
}