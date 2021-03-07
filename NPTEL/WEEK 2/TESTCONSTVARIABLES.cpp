#include<iostream>
using namespace std;

const int cdata = 10;

void func()
{
    int cdata = 151;
    cout<<"\nfunction : "<<cdata;
}
int main()
{
    cout<<"global : "<<cdata;
    {
        const int cdata = 5;
        cout<<"\nscope : "<<cdata;
    }
    func();
}