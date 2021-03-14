#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;

class Stack
{
    public:
        int top;
        char *data;

        int empty()
        {
            return (top == -1);
        }

        void push(char x)
        {
            data[++top] = x;
        }

        void pop()
        {
            --top;
        }

        char topdata()
        {
            return data[top];
        }
};

int main()
{
    Stack s;
    s.data = new char[100];
    s.top = -1;

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
    delete [] s.data;
    return 0;
}