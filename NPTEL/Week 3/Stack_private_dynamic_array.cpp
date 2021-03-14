#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;

class Stack
{
    private:
        int top;
        char *data;
    public:
        Stack(): data(new char[100]), top(-1) {}
        
        ~Stack() {delete [] data;}
        
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