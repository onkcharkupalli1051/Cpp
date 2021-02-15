#include<iostream>
using namespace std;

#define MUL(x,y) x*y
inline int fMUL(int x,int y){return x*y;}

int main()
{
    int a=5,b=5;
    cout<<MUL(a,b+1)<<" "<<fMUL(a,b+1);
    return 0;
}