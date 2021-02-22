#include<iostream>
using namespace std;

class A
{
    int a;
    public:
       A(int x=0)
        {
            a = x;
        }
        void display()
        {
            cout<<a<<endl;
        }
        A operator ++()
        {
            A temp;
            temp.a = ++a;
            return temp;
        }
        //casting operator is used here to solve operator overloading
        A operator ++(int)
        {
            A temp1;
            temp1.a = a++;
            return temp1;
        }
};

int main()
{
    A a(10),b(10);
    ++a;    //object...error
    b = b++;    //object...error
    a.display();
    b.display();
    return 0;
}