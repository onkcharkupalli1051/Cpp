#include<iostream>
using namespace std;

void swap1(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

//use const in function to stop change of value of reference variable :
    //eg : void swap(const int &a)
void swap2(int &a, int &b)
{
    int t;
    
    t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 10,b=20;
    cout<<"a : "<<a<<" b : "<<b;
    
    //call by address
    swap1(&a,&b);
    cout<<"\na : "<<a<<" b : "<<b;

    //call by reference
    swap2(a,b);
    cout<<"\na : "<<a<<" b : "<<b;
    return 0;
}

