#include<iostream>
using namespace std;

class messenger
{
    string msg = "Welcome ";
    public:
        string greet(string name)
        {
            return (msg+name);
        }
};

class spec_messenger : public messenger
{
    string msg = "Hello ";
};

void print(messenger &ob, string name)
{
    cout<<ob.greet(name)<<endl;
}

int main()
{
    messenger ob1;
    spec_messenger ob2;
    print(ob1,"Client");
    print(ob2,"Server");
    return 0;
}