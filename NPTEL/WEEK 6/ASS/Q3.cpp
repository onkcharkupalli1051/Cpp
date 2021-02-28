#include<iostream>
using namespace std;

class iType
{
    int data;
    public:
        iType(int _data = 0) : data(_data){}
        void print(){cout<<data;}
};

class cType
{
    char data;
    public:
        cType(char _data = 0) : data(_data){}
        void print(){cout<<data;}
};

int main()
{
    iType *ip = new iType(97);
    void *vp = ip;
    cType *cp = (cType*)vp;
    cp->print();
    return 0;
}