#include<iostream>
using namespace std;

namespace MyNameSpace{
    int mydata;
    void myfunction()
    {
        cout<<"MyNameSpace Function."<<endl;
    }
    class myclass
    {
        int data;
        public:
            myclass(int d): data(d){}
            void display(){cout<<"MyClass data : "<<data<<endl;}
    };
}

int main()
{
    MyNameSpace::mydata = 10;
    cout<<"MyNameSpace::mydata = "<<MyNameSpace::mydata<<endl;

    MyNameSpace::myfunction();

    MyNameSpace::myclass obj(25);
    obj.display();
    return 0;
}