#include<iostream>
using namespace std;

int& Ref(int &x)
{
    int t = x;
    t++;
    return t;
}
 
int main()
{
    int a=10,b;
    b = Ref(a);
    cout<<"a : "<<a<<" b : "<<b;
    Ref(a) = 3;
    cout<<"\na : "<<a;
    return 0;
}