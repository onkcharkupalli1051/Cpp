#include<iostream>
#include<array>

using namespace std;

class stack
{
    int a[5];
    int top = -1;
    public:
        void push(int x)
        {
            a[++top] = x;
        }
        int pop()
        {
            return a[top];
        }
        void display()
        {
            for(int i=0; i<=top; i++)
            {
                cout<<a[i]<<" ";
            }
        }
};

int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.display();
    cout<<endl<<s1.pop();


    return 0;
}