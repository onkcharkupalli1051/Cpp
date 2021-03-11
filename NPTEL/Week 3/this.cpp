#include<iostream>
using namespace std;

class x{
    public:
        int m1,m2;
        void f(int i, int j)
        {
            m1 = i;
            this->m2 = j;
            cout<<"\nId : "<<this<<endl;
        }
};

int main()
{
    x a;
    a.f(2,3);
    cout<<"Address : "<<&a;
    
    return 0;
}