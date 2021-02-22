#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        void display()
        {
            cout<<"\na: "<<a;
        }
        friend void operator >>(istream &i, A &a4)
        {
            i>>a4.a;
        }
};

int main()
{
    A a1;
    cout<<"Enter value : ";
    cin>>a1;
    return 0;
}