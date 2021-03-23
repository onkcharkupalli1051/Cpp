#include<iostream>
#include<cstring>
using namespace std;

template<class T>
T Max(T x, T y)
{
    return x>y ? x : y;
}

template<>
char *Max<char*>(char *x,char *y)
{
    return strcmp(x,y) > 0 ? x : y;
}

int main()
{
    int a = 3, b = 5, iMax;
    double c = 2.1, d = 3.7, dMax;

    iMax = Max<int>(a,b);
    dMax = Max<double>(c,d);

    cout<<"iMax : "<<iMax<<" dMax : "<<dMax<<endl;

    char *s1 = new char[6];
    char *s2 = new char[6];

    strcpy(s1,"black");
    strcpy(s2,"white");

    cout<<Max<char*>(s1,s2);
    return 0;
}