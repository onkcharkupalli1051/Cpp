#include<iostream>
using namespace std;

int X= 0;
namespace n1{
    int X=5;
}

int main()
{
    int X = 10;
    {
        using namespace n1;
        cout<<X;
    }
    return 0;
}