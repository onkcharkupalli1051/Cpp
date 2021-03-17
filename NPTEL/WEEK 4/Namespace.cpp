#include<iostream>
using namespace std;

namespace MyNameSpace
{
    int Mydata;

    void MyFunction()
    {
        cout<<"\nMyFunction : ";
    }

    class MyClass
    {
        int classdata;
        public:
            MyClass(int data) : classdata(data) {}
            void display()
            {
                cout<<"\nClass data :"<<classdata;
            }
    };
}

int main()
{
    MyNameSpace::Mydata = 10;
    cout<<MyNameSpace::Mydata;

    MyNameSpace::MyFunction();

    MyNameSpace::MyClass obj(20);
    obj.display();
}