#include<iostream>
using namespace std;

template<class x, class y> y even(x a,y b)
{
    if(a>b)
        cout<<a<<" is greater"<<endl;
    else
        cout<<b<<" is greater"<<endl;
}

int main()
{
    even(4.5,5.60);
    even(9,2.3);
    return 0;
}