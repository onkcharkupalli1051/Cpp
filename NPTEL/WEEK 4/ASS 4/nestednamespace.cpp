#include<iostream>
using namespace std;

int data = 100;
namespace name1
{
    int data = 200;
    namespace name2
    {
        int data = 300;
    }
}

int main()
{   
    cout<<data<<endl<<name1::data<<endl<<name1::name2::data;
    return 0;
}