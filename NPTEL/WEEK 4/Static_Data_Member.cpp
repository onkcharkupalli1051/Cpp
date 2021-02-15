#include<iostream>
using namespace std;

// class MyClass
// {
//     int x;
//     public:
//         void get()
//         {
//             x = 15;
//         }
//         void print()
//         {
//             x += 10;
//             cout<<"X : "<<x<<endl;
//         }
// };

// int main()
// {
//     MyClass obj1, obj2;
//     obj1.get();
//     obj2.get();

//     obj1.print();    //prints X:25\nX:25
//     obj2.print();
//     return 0;
// }

class MyClass
{
    static int x;
    public:
        void get()
        {
            x = 15;
        }
        void print()
        {
            x += 10;
            cout<<"X : "<<x<<endl;
        }
};

int MyClass::x=0;
int main()
{
    MyClass obj1, obj2;
    obj1.get();
    obj2.get();

    obj1.print();
    obj2.print();
    return 0;
}
