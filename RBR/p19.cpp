#include<iostream>
using namespace std;

int main()
{
    static int x = 1;
    cout<<x<<" ";
    x++;
    if(x<11){main();}
    return 0;
}