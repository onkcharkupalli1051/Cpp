#include "FileStack.h"

int main()
{
    Stack s;

    char str[10] = "ABCDE";

    for(int i=0;i<5;i++)
    {
        s.push(str[i]);
    }

    cout<<"Reverse String : ";
    while(!s.empty())
    {
        cout<<s.topdata();
        s.pop();
    }
    return 0;
}