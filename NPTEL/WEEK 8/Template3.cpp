#include<iostream>
using namespace std;

template<class T>
T Max(T x, T y)
{
    return x>y ? x : y;
}

template<class T,int size>
T Max(T x[size])
{
    T t = x[0];
    for(int i=0;i<size;i++)
    {
        if(t < x[i])
        {
            t = x[i];
        }
    }
    return t;
}

int main()
{
    int a = 3, b = 5, iMax;
    double c = 2.1, d = 3.7, dMax;

    iMax = Max<int>(a,b);
    dMax = Max<double>(c,d);

    cout<<"iMax : "<<iMax<<" dMax : "<<dMax;
    
    int arr[] = {2,5,6,3,7,9,4};
    cout<<"\nMax(arr) : "<<Max<int,7>(arr)<<endl;
    return 0;
}