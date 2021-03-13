#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 nos. : ";
    cin>>a>>b;

    try
    {
        if(b != 0)
        {
            cout<<"\nDivision : "<<a/b;
        }
        else
        {
            throw "\n\t Cannot divide by zero.";
        }
    }
    catch(const char *ch)
    {
        cout<<ch;
    }
    return 0;
}