#include<iostream>
using namespace std;

extern int a=10,b=25;
extern char s[10] = "hello";
int g =50;

int main()
{
    cout<<a<<endl<<b;
    cout<<endl<<s;
    cout<<endl<<g;
    int x;
    while(a=10)
    {
        int x = 25;
        cout<<endl<<g;
        cout<<endl<<x;
        break;
    }
    cout<<endl<<x;
}