#include<iostream>
using namespace std;

void div(int a, int b, int c)
{
    cout<<"\nDivision : "<<(a/(b-c));
}

int main()
{
    int a,b,c;
    cout<<"Enter 3 nos. : ";
    cin>>a>>b>>c;

    try{
        div(a,b,c);
    }
    catch()
    {
        cout<<"\nError. Cannot divide.";
    }
    return 0;
}