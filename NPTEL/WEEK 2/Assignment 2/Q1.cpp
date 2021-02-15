#include<iostream>
#define X 10
using namespace std;

int main()
{
    const int c1 = 5;
    int i;
    const int c2 = c1;  //c2 =5 
    c2 = X;             //error
    i = c1;             
    c2 = i;
    return 0;
}
