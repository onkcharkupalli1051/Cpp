#include<iostream>
using namespace std;

class MyClass{
    int data;
    public:
        MyClass(int d): data(d) {}

        MyClass& operator++()
        {
            ++data;
            return *this;
        }

        MyClass operator++(int)
        {
            MyClass t(data);
            ++data;
            return t;
        }

        void display()
        {
            cout<<"Data : "<<data<<endl;
        }
};

int main()
{
    MyClass obj1(8);
    obj1.display();

    MyClass obj2 = ++obj1;
    obj1.display();
    obj2.display();

    obj2 = ++obj1;
    obj2.display();

    return 0;
}