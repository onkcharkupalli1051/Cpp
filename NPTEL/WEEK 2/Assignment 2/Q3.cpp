#include<iostream>
#define X 4+1
using namespace std;
const int Y = 4+1;

int main()
{
    int mcube,ccube;
    mcube = X*X*X;      //4+1*4+1*4+1 = 4+4+4+1 = 13
    ccube = Y*Y*Y;      //4+1*4+1*4+1 = 125
    cout<<mcube<<" "<<ccube;
    return 0;
}
