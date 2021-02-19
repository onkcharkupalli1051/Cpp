#include<iostream>
using namespace std;

class B
{
    protected:
        int data;
    public:
        B(){data = 0;}
        B(int x){data = x;}
        void Print()
        {
            cout<<"B object Data : "<<data<<endl;
        }
};

class D:public B
{
    int info;
    public:
        D(){data = 0; info = 0;}
        D(int x,int y){data = x;info = y;}
        D(int z){data = z; info = 0;}
        void Print()
        {
            cout<<"D object : "<<data<<endl;
            cout<<info;
        }
};

int main()
{
    B b(0);
    D d(1,2);

    b.Print();
    d.Print();
}