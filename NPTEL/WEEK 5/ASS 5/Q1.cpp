#include<iostream>
using namespace std;

class adder
{
    public:
        void add()
        {
            cout<<"adder::add() ";
        }
};

class int_adder : public adder
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
};

int main()
{
    int_adder ia;
    ia.add();
    cout<<ia.add(10,20);
    return 0;
}

//find the need where we have to go for two parameter