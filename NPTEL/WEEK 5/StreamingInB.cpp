#include<iostream>
using namespace std;

class B
{
    protected:
        int data;
    public:
        B(int b = 0):data(b){cout<<"B::B(int): "<<data<<endl;}
        ~B(){cout<<"B::~B(): "<<data<<endl;}
        friend ostream& operator<<(ostream& os, const B& b)
        {
            os<<b.data<<endl;
            return os;
        }
};

class D:public B
{
    int info;
    public:
        D(int d, int i):B(d),info(i)
        {
            cout<<"D::D(int,int): "<<data<<", "<<info<<endl;
        }
        D(int i):info(i)
        {
            cout<<"D::D(int):"<<data<<", "<<info<<endl; 
        }
        ~D()
        {
            cout<<"D::~D(): "<<data<<", "<<info<<endl;
        }
        /*
        friend ostream& operator<<(ostream& os,const D& d)
        {
            os<<d.data<<" "<<d.info<<endl;
            return os;
        }
        */
};

int main()
{
    B b(0);
    D d(1,2);
    D d2(3);
    
    cout<<b<<d;
    return 0;
}