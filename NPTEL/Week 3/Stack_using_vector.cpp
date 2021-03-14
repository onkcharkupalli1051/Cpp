#include<iostream>
#include<vector>
using namespace std;

class Stack
{
    public:
        vector<char> data;
        int top;

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
    char str[10] = "ABCDE";

    s.data.resize(100);
    s.top = -1;

    for(int i=0; i<5;i++)
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