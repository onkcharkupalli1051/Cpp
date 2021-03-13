#include<iostream>
using namespace std;

template<class T>
class math
{
    T first, second;
    public : 
        math(){}
        math(T a, T b)
        {
            first = a;
            second = b;
        }
        void addition();
};


template<class T>
void math<T>:: addition()
{
    cout<<"\nNumber 1 : "<<first<<" Number 2 : "<<second;
    cout<<"\nAddition : "<<first+second<<endl<<endl;
}

int main()
{
    math<int> m1(10,20);
    math<double> m2(1.2,3.4);

    m1.addition();
    m2.addition();
    return 0;
}